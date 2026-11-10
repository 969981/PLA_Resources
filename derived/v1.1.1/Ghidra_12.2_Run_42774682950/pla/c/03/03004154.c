/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03004154; name: FUN_03004154
 */


void FUN_03004154(long *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  
  param_2 = param_2 & 0xffffff;
  if (param_2 != 0xffffff) {
    plVar4 = (long *)*param_1;
    lVar5 = plVar4[7];
    if (((*(uint *)(lVar5 + param_2 * 0xc0 + 0x54) ^ 0xffffffff) & 10) == 0) {
      cVar3 = (char)param_1[2];
      if (cVar3 == -1) {
        lVar5 = (**(code **)(*plVar4 + 0x270))
                          (plVar4,*(undefined4 *)(lVar5 + param_2 * 0xc0 + 0x80));
        *(undefined1 *)(param_1 + 2) = *(undefined1 *)(lVar5 + 0x5e);
      }
      else {
        plVar4 = (long *)param_1[1];
        uVar7 = (ulong)*(uint *)(lVar5 + param_2 * 0xc0 + 0x80);
        lVar5 = plVar4[2] + uVar7 * 0x80;
        pcVar8 = (char *)(lVar5 + 0x5e);
        if (*pcVar8 != cVar3) {
          if (*(int *)(lVar5 + 0x4c) == 0 || *(int *)(lVar5 + 0x4c) == 0x7fffffff) {
            *pcVar8 = cVar3;
          }
          else {
            FUN_030159c4(plVar4,lVar5,uVar7);
            *pcVar8 = cVar3;
            FUN_030157ec(plVar4,lVar5,uVar7);
          }
          uVar1 = *(uint *)(lVar5 + 0x48);
          lVar5 = *plVar4;
          uVar2 = uVar1;
          do {
            lVar6 = *(long *)(lVar5 + 0x10);
            uVar7 = (ulong)uVar2 & 0xffffff;
            if ((*(byte *)(lVar6 + uVar7 * 0xc0 + 0x54) >> 3 & 1) != 0) {
              *(char *)(*(long *)(lVar5 + 0xd0) + uVar7) = cVar3;
            }
            lVar6 = lVar6 + uVar7 * 0xc0;
            *(ushort *)(lVar6 + 0x58) = *(ushort *)(lVar6 + 0x58) | 0x20;
            uVar2 = *(uint *)(lVar6 + 0x84);
          } while (uVar2 != uVar1);
        }
      }
    }
  }
  return;
}


