/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef380c; name: FUN_02ef380c
 */


void FUN_02ef380c(void)

{
  long lVar1;
  long lVar2;
  long local_30;
  long local_28;
  
  lVar2 = *(long *)(PTR_DAT_04388730 + 0x10);
  do {
    if (lVar2 == 0) {
      return;
    }
    while ((((lVar1 = *(long *)(lVar2 + 8), 1 < *(uint *)(lVar1 + 0x50) ||
             (*(char *)(lVar1 + 0x54) == '\0')) ||
            ((2 < *(uint *)(lVar1 + 0x40) && (*(long *)(*(long *)(lVar1 + 0x38) + 0x10) != 0)))) &&
           ((*(byte *)(lVar2 + 0x54) & 1) != 0))) {
      local_30 = 0;
      local_28 = 0;
      if (((*(uint *)(lVar1 + 0x40) < 2) ||
          (lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 8), lVar1 == 0)) &&
         (lVar1 = DAT_0440a410, DAT_0440a410 == 0)) {
        FUN_02e43d1c();
        lVar1 = DAT_0440a410;
      }
      *(undefined4 *)(lVar2 + 0x48) = 0;
      FUN_02ef013c(lVar2,lVar2 + 0x40,lVar1 + 0xa0,lVar1,&local_30,&local_28);
      if ((local_28 != 0) && (local_30 != 0)) {
        FUN_02ef0870(lVar2);
      }
      *(byte *)(lVar2 + 0x54) = *(byte *)(lVar2 + 0x54) & 0xfe;
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 == 0) {
        return;
      }
    }
    lVar2 = *(long *)(lVar2 + 0x10);
  } while( true );
}


