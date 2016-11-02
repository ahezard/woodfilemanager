cp akmenu4/akmenu4_r4.nds WoodFileManager.nds

./dlditool.exe dldi/r4_sd/r4_sd.dldi WoodFileManager.nds

python patch_ndsheader_dsiware.py --mode dsi --title "AKMENU4" --maker 01 --code KWME WoodFileManager.nds

./make_cia --srl=WoodFileManager.nds