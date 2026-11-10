/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032beb0; name: FUN_0032beb0
 */


int * FUN_0032beb0(long *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  
  iVar3 = (int)param_1[1];
  uVar4 = iVar3 + param_2;
  piVar5 = (int *)param_1[2];
  piVar2 = piVar5;
  if ((int)uVar4 <= *(int *)((long)param_1 + 0xc)) goto LAB_0032bf80;
  uVar1 = *(int *)((long)param_1 + 0xc) * 2;
  lVar6 = *param_1;
  if ((int)uVar4 <= (int)uVar1) {
    uVar4 = uVar1;
  }
  if ((int)uVar4 < 5) {
    uVar4 = 4;
  }
  if (lVar6 == 0) {
    piVar2 = (int *)FUN_002ee6d0((ulong)uVar4 * 8 + 8);
    param_1[2] = (long)piVar2;
    *(uint *)((long)param_1 + 0xc) = uVar4;
    if (piVar5 != (int *)0x0) goto LAB_0032bf20;
LAB_0032bf64:
    *piVar2 = 0;
  }
  else {
    uVar7 = (ulong)uVar4 * 8 + 0xf & 0x7fffffff8;
    if (*(long *)(lVar6 + 0x70) != 0) {
      FUN_0032cf88(lVar6,0,uVar7);
    }
    piVar2 = (int *)FUN_0032cea0(lVar6,uVar7);
    param_1[2] = (long)piVar2;
    *(uint *)((long)param_1 + 0xc) = uVar4;
    if (piVar5 == (int *)0x0) goto LAB_0032bf64;
LAB_0032bf20:
    if (*piVar5 < 1) goto LAB_0032bf64;
    memcpy(piVar2 + 2,piVar5 + 2,(long)*piVar5 << 3);
    piVar2 = (int *)param_1[2];
    *piVar2 = *piVar5;
  }
  if (lVar6 == 0) {
    FUN_002ee710(piVar5);
    piVar2 = (int *)param_1[2];
  }
  iVar3 = (int)param_1[1];
LAB_0032bf80:
  return piVar2 + (long)iVar3 * 2 + 2;
}


