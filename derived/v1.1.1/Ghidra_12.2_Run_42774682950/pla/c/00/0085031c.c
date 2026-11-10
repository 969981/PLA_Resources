/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085031c; name: FUN_0085031c
 */


int FUN_0085031c(long param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  int aiStack_68 [10];
  __less a_Stack_38 [8];
  
  cVar3 = FUN_008473d0();
  if ((cVar3 == -3) || (bVar4 = FUN_008473d0(param_1), bVar4 == param_2)) {
    iVar5 = -1;
  }
  else {
    iVar5 = -1;
    if ((param_2 < *(byte *)(param_1 + 0x5a)) && (param_3 < 10)) {
      uVar9 = (ulong)param_2;
      lVar10 = *(long *)(param_1 + 0x60);
      uVar8 = *(uint *)(lVar10 + uVar9 * 0x34);
      if (uVar8 != 0) {
        puVar11 = (uint *)(lVar10 + uVar9 * 0x34 + 0x2c);
        if (*puVar11 == param_3) {
          iVar5 = *(int *)(lVar10 + uVar9 * 0x34 + 0x30);
        }
        else {
          uVar1 = uVar8;
          if (param_3 <= uVar8) {
            uVar1 = param_3;
          }
          if (uVar1 == 0) {
            uVar6 = 0;
          }
          else {
            uVar2 = *(uint *)(lVar10 + uVar9 * 0x34 + 4);
            uVar7 = 0;
            uVar6 = (ulong)uVar1;
            do {
              uVar8 = uVar8 - 1;
              aiStack_68[uVar7 + 1] =
                   *(int *)(lVar10 + uVar9 * 0x34 + (((ulong)uVar2 + (ulong)uVar8) % 9) * 4 + 8);
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar6);
          }
          std::__sort<std::__less<int,int>&,int*>(aiStack_68 + 1,aiStack_68 + uVar6 + 1,a_Stack_38);
          uVar8 = uVar1 >> 1;
          if ((uVar1 & 1) == 0) {
            iVar5 = aiStack_68[(ulong)uVar8 + 1] + aiStack_68[uVar8];
            if (iVar5 < 0) {
              iVar5 = iVar5 + 1;
            }
            iVar5 = iVar5 >> 1;
          }
          else {
            iVar5 = aiStack_68[(ulong)uVar8 + 1];
          }
          *(int *)(lVar10 + uVar9 * 0x34 + 0x30) = iVar5;
          *puVar11 = param_3;
        }
      }
    }
  }
  return iVar5;
}


