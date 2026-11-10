/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013dfe50; name: FUN_013dfe50
 */


void FUN_013dfe50(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong unaff_x22;
  ulong unaff_x23;
  long lVar6;
  ulong unaff_x25;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong unaff_x28;
  long lVar9;
  
  FUN_013df980(param_1,(long)param_1 + 0xc,param_1 + 3,param_3);
  if ((undefined8 *)((long)param_1 + 0x24) != param_2) {
    lVar6 = 0;
    puVar5 = param_1 + 3;
    puVar8 = (undefined8 *)((long)param_1 + 0x24);
    do {
      unaff_x28 = unaff_x28 & 0xffffffff00000000 | (ulong)*(uint *)(puVar8 + 1);
      unaff_x25 = unaff_x25 & 0xffffffff00000000 | (ulong)*(uint *)(puVar5 + 1);
      uVar4 = FUN_013df8fc(param_3,*puVar8,unaff_x28,*puVar5,unaff_x25);
      if ((uVar4 & 1) != 0) {
        uVar7 = *puVar8;
        uVar2 = *(uint *)(puVar8 + 1);
        lVar3 = lVar6;
        do {
          lVar9 = lVar3;
          *(undefined8 *)((long)param_1 + lVar9 + 0x24) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x18);
          *(undefined4 *)((long)param_1 + lVar9 + 0x2c) =
               *(undefined4 *)((long)param_1 + lVar9 + 0x20);
          if (lVar9 == -0x18) {
            puVar5 = param_1;
            goto LAB_013dfeac;
          }
          unaff_x23 = unaff_x23 & 0xffffffff00000000 | (ulong)uVar2;
          unaff_x22 = unaff_x22 & 0xffffffff00000000 |
                      (ulong)*(uint *)((long)param_1 + lVar9 + 0x14);
          uVar4 = FUN_013df8fc(param_3,uVar7,unaff_x23,*(undefined8 *)((long)param_1 + lVar9 + 0xc),
                               unaff_x22);
          lVar3 = lVar9 + -0xc;
        } while ((uVar4 & 1) != 0);
        puVar5 = (undefined8 *)((long)param_1 + lVar9 + 0x18);
LAB_013dfeac:
        *puVar5 = uVar7;
        *(uint *)(puVar5 + 1) = uVar2;
      }
      puVar1 = (undefined8 *)((long)puVar8 + 0xc);
      lVar6 = lVar6 + 0xc;
      puVar5 = puVar8;
      puVar8 = puVar1;
    } while (puVar1 != param_2);
  }
  return;
}


