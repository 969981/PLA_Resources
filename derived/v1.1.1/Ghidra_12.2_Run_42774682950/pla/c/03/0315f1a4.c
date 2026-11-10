/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315f1a4; name: FUN_0315f1a4
 */


void FUN_0315f1a4(long param_1,int param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  FUN_033299e0(0xd9656d7a);
  *(undefined4 *)(param_3 + 1) = 0;
  fVar6 = *(float *)(param_1 + 0x18);
  fVar7 = *(float *)(param_1 + 0x1c);
  if (((fVar7 + 0.001 < fVar6) && (0 < param_2)) &&
     (*(int *)(param_1 + 0x70) < *(int *)(param_1 + 0x30))) {
    uVar5 = 0x13a92a;
    iVar3 = 0;
    lVar4 = (long)*(int *)(param_1 + 0x70);
    while( true ) {
      if ((fVar7 + 0.001 < fVar6) && (*(int *)(*(long *)(param_1 + 0x28) + lVar4 * 4) == -1)) {
        lVar2 = *param_3;
        iVar1 = iVar3 + 1;
        if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar3) {
          lVar2 = FUN_0315f314(PTR_PTR_0434a080,iVar1,lVar2,iVar3,(long)param_3 + 0xc);
          *param_3 = lVar2;
          iVar3 = (int)param_3[1];
        }
        *(int *)(lVar2 + (long)iVar3 * 4) = (int)lVar4;
        *(int *)(param_3 + 1) = iVar1;
        iVar3 = iVar1;
      }
      if (uVar5 < 0x13a92a) {
        FUN_033299e0(0xc871f47e);
        iVar3 = (int)param_3[1];
      }
      if ((param_2 <= iVar3) || (lVar4 = lVar4 + 1, *(int *)(param_1 + 0x30) <= lVar4)) break;
      fVar6 = *(float *)(param_1 + 0x18);
      fVar7 = *(float *)(param_1 + 0x1c);
      uVar5 = uVar5 + 0x13a92a;
    }
  }
  return;
}


