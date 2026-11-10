/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed4d40; name: FUN_02ed4d40
 */


undefined8 FUN_02ed4d40(long *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ushort local_34;
  
  if (param_1 == (long *)0x0) {
LAB_02ed4e20:
    uVar4 = 1;
  }
  else {
    if (0 < (int)(param_2 * 0x10000)) {
      uVar5 = 0;
      do {
        uVar3 = (**(code **)(*param_1 + 0x130))(param_1,1);
        if ((uVar3 & 1) == 0) {
          uVar5 = uVar5 & 0xffff;
          goto LAB_02ed4e3c;
        }
        uVar5 = uVar5 + 1;
      } while ((int)(uVar5 & 0xffff) < (int)(short)param_2);
    }
    uVar4 = 1;
    local_50[0] = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 1;
    if (0xffff < (int)param_2) {
      local_34 = 0x100;
      iVar2 = (**(code **)(*param_1 + 0x120))(param_1,local_50,1,1);
      if (iVar2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar1 = 1;
        do {
          uVar5 = uVar1;
          uVar1 = uVar5 & 0xffff;
          if ((int)param_2 >> 0x10 <= (int)uVar1) goto LAB_02ed4e20;
          local_34 = local_34 & 0xff00;
          iVar2 = (**(code **)(*param_1 + 0x120))(param_1,local_50,1,1);
          uVar1 = uVar1 + 1;
        } while (iVar2 != 0);
        uVar5 = uVar5 << 0x10;
      }
      uVar5 = uVar5 | param_2 & 0xffff;
LAB_02ed4e3c:
      FUN_02ed4eb4(param_1,uVar5);
      uVar4 = 0;
    }
  }
  return uVar4;
}


