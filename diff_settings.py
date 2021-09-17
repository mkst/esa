import os

def set_config(config, basename):
    config["arch"] = "mipsel"
    config["baseimg"] = f"{basename}.dat"
    config["myimg"] = f"build/{basename}.dat"
    config["mapfile"] = f"build/{basename}.map"
    config["source_directories"] = [f"src/{basename}", "include"]

def apply(config, args):
    # TODO: guess based on recently updated, "esa" vs "pt" vs "sles_018"
    esa_dat_exists = pt_dat_exists = False
    if os.path.isfile("build/esa.dat"):
        esa_dat_exists = True
    if os.path.isfile("build/pt.dat"):
        pt_dat_exists = True

    if not pt_dat_exists:
        set_config(config, "esa")
    elif not esa_dat_exists:
        set_config(config, "pt")
    # both exist, so pick most recently modified...
    elif os.stat("build/esa.dat").st_mtime > os.stat("build/pt.dat").st_mtime:
        set_config(config, "esa")
    else:
        set_config(config, "pt")
