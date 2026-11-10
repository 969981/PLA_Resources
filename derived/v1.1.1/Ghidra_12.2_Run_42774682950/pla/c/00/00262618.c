/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00262618; name: FUN_00262618
 */


void FUN_00262618(long param_1,long param_2,long param_3,undefined8 param_4)

{
  short sVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  short *psVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined8 local_68;
  
  uVar11 = (ulong)(*(uint *)(param_3 + 0xd0) &
                  ((int)*(uint *)(param_3 + 0xd0) >> 0x1f ^ 0xffffffffU));
  FUN_00251550(param_2,param_4,*(undefined8 *)(param_3 + 0x40),
               *(undefined4 *)(param_3 + uVar11 * 0x18 + 0x58));
  puVar2 = (undefined8 *)FUN_0022f734(*(undefined8 *)(param_2 + 0xb8),0);
  local_68 = *puVar2;
  uVar9 = (ulong)*(uint *)(param_3 + 0xd0);
  if (0 < (int)*(uint *)(param_3 + 0xd0)) {
    puVar2 = (undefined8 *)(param_3 + 0xb8);
    puVar12 = (undefined4 *)(param_3 + uVar11 * 0x18 + 100);
    do {
      FUN_008782ac(param_4,*puVar12,4,*puVar2,&local_68);
      uVar9 = uVar9 - 1;
      puVar2 = puVar2 + 1;
      puVar12 = puVar12 + 1;
    } while (uVar9 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0xc0);
  if (uVar3 == 0) {
    return;
  }
  uVar9 = 0;
  psVar6 = *(short **)(param_1 + 0xa0);
  sVar1 = *psVar6;
  do {
    if (((sVar1 != 0) && (psVar6[uVar9 * 0x50 + 8] != 0)) && (0.0 < *(float *)(param_1 + 0x18))) {
      lVar7 = *(long *)(param_1 + 0xa8);
      uVar8 = *(uint *)(lVar7 + uVar9 * 0x30 + 0x24);
      if (uVar8 != 0) {
        uVar3 = 0;
        do {
          lVar7 = *(long *)(lVar7 + uVar9 * 0x30 + 0x28);
          piVar10 = (int *)(lVar7 + (long)(int)(uVar8 + ~uVar3) * 0x18);
          if (*(code **)(param_3 + 0x48) == (code *)0x0) {
            FUN_00877fa4(0x3f800000,param_4,*(undefined8 *)(param_2 + 0x150),0,2,0);
            FUN_0022d778(param_2,param_4);
            iVar4 = *piVar10;
            if (iVar4 == 1) goto LAB_00262744;
LAB_002627bc:
            if (iVar4 == 0) {
              lVar5 = *(long *)(param_1 + 0xa8);
              if (*(int *)(lVar5 + uVar9 * 0x30 + 0x24) != 0) {
                lVar13 = 0;
                uVar11 = 1;
                do {
                  if (*(long *)(*(long *)(lVar5 + uVar9 * 0x30 + 0x28) + lVar13 + 0x10) ==
                      *(long *)(lVar7 + (long)(int)(uVar8 + ~uVar3) * 0x18 + 0x10)) {
                    FUN_00262290(param_1,param_2,param_3,param_4,
                                 *(undefined8 *)(lVar5 + uVar9 * 0x30));
                    lVar5 = *(long *)(param_1 + 0xa8);
                  }
                  do {
                    if (*(uint *)(lVar5 + uVar9 * 0x30 + 0x24) <= uVar11) goto LAB_0026289c;
                    lVar13 = lVar13 + 0x18;
                    uVar11 = uVar11 + 1;
                  } while (*piVar10 != 0);
                } while( true );
              }
LAB_0026289c:
              FUN_002620d0(param_1,param_2,param_3,param_4,*(undefined8 *)(lVar5 + uVar9 * 0x30),
                           piVar10);
            }
          }
          else {
            (**(code **)(param_3 + 0x48))(param_2,param_4,*(undefined8 *)(param_3 + 0x50));
            iVar4 = *piVar10;
            if (iVar4 != 1) goto LAB_002627bc;
LAB_00262744:
            FUN_00262450(param_1,param_2,param_3,param_4,
                         *(undefined8 *)(*(long *)(param_1 + 0xa8) + uVar9 * 0x30),piVar10);
          }
          lVar7 = *(long *)(param_1 + 0xa8);
          uVar8 = *(uint *)(lVar7 + uVar9 * 0x30 + 0x24);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar8);
        uVar3 = *(uint *)(param_1 + 0xc0);
      }
    }
    uVar9 = uVar9 + 1;
    if (uVar3 <= uVar9) {
      return;
    }
    psVar6 = *(short **)(param_1 + 0xa0);
    sVar1 = psVar6[uVar9 * 0x50];
  } while( true );
}


