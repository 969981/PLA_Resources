/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e0190; name: FUN_004e0190
 */


undefined4 FUN_004e0190(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int local_44;
  int local_38;
  undefined4 local_34;
  
  uVar1 = (uint)(param_4 != 0) << 0xc;
  if (param_5 != 0) {
    lVar5 = FUN_0044e660(param_3);
    if (lVar5 == 0) {
      uVar2 = 0xffffffff;
      if (param_1 == 0) goto LAB_004e0244;
LAB_004e01e4:
      iVar3 = FUN_004e2fc0(param_1,uVar1 | 0x60010,uVar2,0,param_3);
    }
    else {
      uVar2 = FUN_00422d50();
      if (param_1 != 0) goto LAB_004e01e4;
LAB_004e0244:
      iVar3 = FUN_004e2ff0(param_2,uVar1 | 0x60010,uVar2,0,param_3);
    }
    if (iVar3 == 0) {
      return 399;
    }
    goto LAB_004e0284;
  }
  lVar5 = FUN_0044e660(param_3);
  if (lVar5 == 0) {
    uVar2 = 0xffffffff;
    if (param_1 == 0) goto LAB_004e026c;
LAB_004e0220:
    iVar3 = FUN_004e2fc0(param_1,uVar1 | 0x60011,uVar2,0,param_3);
  }
  else {
    uVar2 = FUN_00422d50();
    if (param_1 != 0) goto LAB_004e0220;
LAB_004e026c:
    iVar3 = FUN_004e2ff0(param_2,uVar1 | 0x60011,uVar2,0,param_3);
  }
  if (iVar3 == 0) {
    return 0x18d;
  }
LAB_004e0284:
  uVar4 = FUN_00457510(param_3);
  if ((uVar4 >> 0xd & 1) == 0) {
    iVar3 = FUN_00466cc0(param_3,&local_38,&local_44,&local_34,0);
    if (iVar3 == 0) {
      local_34 = 0xffffffff;
    }
    if (local_38 == 0) {
      local_38 = local_44;
    }
    if (param_1 == 0) {
      iVar3 = FUN_004e2ff0(param_2,uVar1 | 0x60012,local_34,local_38,param_3);
    }
    else {
      iVar3 = FUN_004e2fc0(param_1);
    }
  }
  else {
    iVar3 = 1;
  }
  uVar2 = 0x18e;
  if (iVar3 != 0) {
    uVar2 = 1;
  }
  return uVar2;
}


