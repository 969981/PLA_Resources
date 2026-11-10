/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f116d4; name: FUN_02f116d4
 */


void FUN_02f116d4(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_40;
  undefined1 local_38;
  
  for (lVar2 = DAT_0440ad48; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x1c8)) {
    while (((*(long *)(lVar2 + 0x1d0) == param_1 && (uVar1 = FUN_02ececd4(lVar2), (uVar1 & 1) == 0))
           || ((*(long *)(lVar2 + 0x238) != 0 &&
               (uVar1 = FUN_02f2de44(*(long *)(lVar2 + 0x238),param_1), (uVar1 & 1) != 0))))) {
      local_40 = 0x400000000;
      local_38 = 0;
      FUN_02ecc3d4(lVar2,&local_40,1);
      FUN_02e83118(DAT_0440a128,*(undefined8 *)(lVar2 + 0x180),0,0);
      lVar2 = *(long *)(lVar2 + 0x1c8);
      if (lVar2 == 0) goto LAB_02f1176c;
    }
  }
LAB_02f1176c:
  FUN_02f13db8(param_1);
  return;
}


