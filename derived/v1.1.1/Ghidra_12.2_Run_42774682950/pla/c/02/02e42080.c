/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e42080; name: FUN_02e42080
 */


void FUN_02e42080(long *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  uVar7 = *(uint *)(DAT_0440a140 + 0x38);
  if (uVar7 != 0) {
    uVar2 = 0;
    uVar6 = (uint)*param_1;
    if (uVar7 != 0) {
      uVar2 = uVar6 / uVar7;
    }
    for (plVar8 = *(long **)(*(long *)(DAT_0440a140 + 0x30) + (ulong)(uVar6 - uVar2 * uVar7) * 8);
        plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8[1] == *param_1) {
        *(int *)(plVar8[2] + 0x50) = *(int *)(plVar8[2] + 0x50) + 1;
        puVar9 = (undefined8 *)plVar8[2];
        if (puVar9 != (undefined8 *)0x0) {
          lVar3 = FUN_02e42e10(puVar9);
          lVar4 = FUN_02e43014(puVar9);
          lVar5 = FUN_02e43210(puVar9);
          if (((lVar4 == 0) || (lVar3 == 0)) || (lVar5 == 0)) {
            uVar7 = *(uint *)(puVar9 + 8);
            if (uVar7 < 8) {
LAB_02e4216c:
              if (uVar7 < 6) goto LAB_02e42118;
              lVar3 = puVar9[7];
            }
            else {
              lVar3 = puVar9[7];
              if (*(long *)(lVar3 + 0x38) != 0) {
                FUN_02eb1f30((long *)(lVar3 + 0x38));
                uVar7 = *(uint *)(puVar9 + 8);
                goto LAB_02e4216c;
              }
            }
            if (*(long *)(lVar3 + 0x28) != 0) {
              FUN_02eb1f30();
            }
          }
LAB_02e42118:
          iVar1 = *(int *)(puVar9 + 10);
          *(int *)(puVar9 + 10) = iVar1 + -1;
          if (iVar1 + -1 == 0) {
            (**(code **)*puVar9)(puVar9);
            (*DAT_0442d150)(4,puVar9);
          }
        }
        break;
      }
    }
  }
  FUN_02e433e4(DAT_04409a48,*param_1);
  return;
}


