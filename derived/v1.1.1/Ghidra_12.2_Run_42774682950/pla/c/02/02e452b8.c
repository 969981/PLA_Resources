/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e452b8; name: FUN_02e452b8
 */


long FUN_02e452b8(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  char *local_48;
  char local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = (uint)param_2 / uVar1;
    }
    for (lVar3 = *(long *)(*param_1 + (ulong)((uint)param_2 - uVar2 * uVar1) * 8); lVar3 != 0;
        lVar3 = *(long *)(lVar3 + 0x48)) {
      if (*(long *)(lVar3 + 0x40) == param_2) {
        return lVar3;
      }
    }
  }
  lVar3 = FUN_02e4574c(param_1 + 9,param_2);
  if (lVar3 != 0) {
    uVar4 = FUN_02e457b4(param_1,lVar3);
    if ((uVar4 & 1) == 0) {
      FUN_02e50298(lVar3);
      FUN_02e473f0(param_1 + 9,lVar3);
      lVar3 = 0;
    }
    else {
      local_54 = 0x3f8000003f800000;
      local_58 = 0;
      local_48 = (char *)0x0;
      local_40 = '\0';
      local_38 = 0;
      local_34 = 0;
      local_60 = 0x3f80000000000000;
      local_70 = 0x3f80000000000000;
      uStack_68 = 0;
      if (param_2 == -1) {
        local_54 = 0x3f800000;
        local_48 = "Outdoors";
      }
      FUN_02e504d4(lVar3,&local_70,0xffffffffffffffff);
      if (*(long *)(lVar3 + 0x78) == 0) {
        FUN_02e50438(lVar3,param_1[0xd]);
      }
      if ((local_48 != (char *)0x0) && (local_40 != '\0')) {
        FUN_02f59e60(9);
      }
    }
  }
  return lVar3;
}


