/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5ea78; name: FUN_00d5ea78
 */


undefined8 FUN_00d5ea78(long *param_1)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  short sVar11;
  long lVar12;
  undefined1 auStack_60 [24];
  long *local_48;
  
  switch((short)param_1[0x2c3]) {
  case 0:
    iVar4 = 0;
    if ((int)param_1[0xdb] != 2) {
      iVar4 = (int)param_1[0xdb];
    }
    lVar10 = FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8 + (long)iVar4 * 0x28);
    lVar10 = *(long *)(lVar10 + 0x8b0);
    piVar1 = (int *)(lVar10 + 0x20);
    if (*(int *)(lVar10 + 0x28) != 0) {
      piVar1 = (int *)(lVar10 + 0x24);
    }
    uVar3 = *(int *)(lVar10 + 0x14) + *piVar1 * *(int *)(lVar10 + 0x10);
    uVar8 = FUN_00d5e59c(param_1,(int)param_1[0xdb],uVar3);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    lVar10 = *(long *)(*(long *)(param_1[(long)(int)param_1[0xdb] * 0xc + 199] + 0xa8) +
                      (ulong)uVar3 * 0x10);
    *(undefined4 *)(lVar10 + 8) = 1;
    *(undefined8 *)(lVar10 + 0x20) = 0xffffffff00000000;
    *(undefined2 *)(lVar10 + 0xc) = 0;
    *(undefined4 *)(lVar10 + 0x10) = 0;
    *(undefined2 *)(lVar10 + 0x14) = 0;
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(undefined2 *)(lVar10 + 0x1c) = 0;
    *(undefined4 *)(lVar10 + 0x28) = 3;
    iVar4 = (int)param_1[0xdb];
    if (iVar4 == 2) {
      iVar4 = 0;
    }
    lVar7 = FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8 + (long)iVar4 * 0x28);
    lVar2 = **(long **)(lVar7 + 0x838);
    lVar7 = (*(long **)(lVar7 + 0x838))[1];
    if ((lVar2 != lVar7) &&
       ((*(char *)(lVar2 + 0x20) != '\0' || (*(uint *)(lVar2 + 0x24) != uVar3)))) {
      lVar6 = lVar2 + 0x30;
      do {
        lVar12 = lVar6;
        lVar2 = lVar7;
        if (lVar7 == lVar12) break;
        lVar6 = lVar12 + 0x30;
      } while ((*(char *)(lVar12 + 0x20) != '\0') ||
              (lVar2 = lVar12, *(uint *)(lVar12 + 0x24) != uVar3));
    }
    if ((lVar2 != 0) && ((lVar7 != lVar2 && (iVar4 = *(int *)(lVar2 + 0x28), iVar4 != -1)))) {
      FUN_00d5e760(param_1,(int)param_1[0xdb],uVar3);
      FUN_00d53568(param_1,lVar10,iVar4,(int)param_1[0xdb]);
      FUN_00d53960(param_1,(int)param_1[0xdb],uVar3,*(undefined4 *)(lVar10 + 0x48));
    }
    break;
  case 1:
    iVar4 = (int)param_1[0xdb];
    iVar5 = iVar4;
    if (iVar4 == 2) {
      iVar5 = 0;
    }
    lVar10 = FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8 + (long)iVar5 * 0x28);
    lVar10 = *(long *)(lVar10 + 0x8b0);
    piVar1 = (int *)(lVar10 + 0x20);
    if (*(int *)(lVar10 + 0x28) != 0) {
      piVar1 = (int *)(lVar10 + 0x24);
    }
    FUN_00d5e360(auStack_60,param_1,iVar4,
                 *(int *)(lVar10 + 0x14) + *piVar1 * *(int *)(lVar10 + 0x10));
    if (param_1[0x59] != 0) {
      FUN_0283b430(param_1[0x59],auStack_60);
    }
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    iVar4 = 0;
    if ((int)param_1[0xdb] != 2) {
      iVar4 = (int)param_1[0xdb];
    }
    *(undefined4 *)((long)param_1 + 0x161c) = 0;
    lVar10 = FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8 + (long)iVar4 * 0x28);
    lVar10 = *(long *)(lVar10 + 0x8b0);
    piVar1 = (int *)(lVar10 + 0x20);
    if (*(int *)(lVar10 + 0x28) != 0) {
      piVar1 = (int *)(lVar10 + 0x24);
    }
    iVar4 = *(int *)(lVar10 + 0x14) + *piVar1 * *(int *)(lVar10 + 0x10);
    (**(code **)(*param_1 + 0x1a8))(param_1,(int)param_1[0xdb],iVar4);
    uVar8 = FUN_00d5b708(param_1,(int)param_1[0xdb]);
    if ((uVar8 & 1) == 0) {
      (**(code **)(*param_1 + 0x118))(param_1,(int)param_1[0xdb],iVar4,0);
      FUN_00d5751c(param_1,(int)param_1[0xdb],0);
LAB_00d5ed5c:
      sVar11 = 4;
      goto LAB_00d5ec24;
    }
    break;
  case 2:
    iVar4 = 0;
    if ((int)param_1[0xdb] != 2) {
      iVar4 = (int)param_1[0xdb];
    }
    lVar10 = FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8 + (long)iVar4 * 0x28);
    lVar10 = *(long *)(lVar10 + 0x8b0);
    piVar1 = (int *)(lVar10 + 0x20);
    if (*(int *)(lVar10 + 0x28) != 0) {
      piVar1 = (int *)(lVar10 + 0x24);
    }
    (**(code **)(*param_1 + 0x118))
              (param_1,(int)param_1[0xdb],
               *(int *)(lVar10 + 0x14) + *piVar1 * *(int *)(lVar10 + 0x10),0);
    FUN_00d5751c(param_1,(int)param_1[0xdb],0);
    break;
  case 3:
    lVar10 = (long)(int)param_1[0xdb];
    if ((*(int *)((long)param_1 + lVar10 * 0x60 + 0x66c) != 2) ||
       (*(short *)((long)param_1 + lVar10 * 2 + 0x161c) == 0)) goto LAB_00d5ed5c;
    FUN_00d51790(param_1,lVar10,0xffffffff,0xffffffff);
    iVar4 = 0;
    if ((int)param_1[0xdb] != 2) {
      iVar4 = (int)param_1[0xdb];
    }
    plVar9 = (long *)FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8 + (long)iVar4 * 0x28);
    if (*(char *)((long)plVar9 + 0xa2) != '\0') {
      *(undefined1 *)((long)plVar9 + 0xa2) = 0;
      (**(code **)(*plVar9 + 0x98))(plVar9,0);
    }
    break;
  case 4:
    *(undefined2 *)(param_1 + 0x2c3) = 0;
    return 1;
  default:
    return 0;
  }
  sVar11 = (short)param_1[0x2c3] + 1;
LAB_00d5ec24:
  *(short *)(param_1 + 0x2c3) = sVar11;
  return 0;
}


