/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002333a8; name: FUN_002333a8
 */


void FUN_002333a8(long param_1,long param_2,undefined8 param_3,int *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 local_90;
  long lStack_88;
  float local_80 [2];
  undefined8 *local_78;
  
  lVar3 = FUN_002424d0(*(undefined8 *)(param_1 + 0x18),0x13);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 8) == 0)) {
    puVar4 = (undefined8 *)(**(code **)PTR_DAT_04372ba8)(0xe8,4,*(undefined8 *)PTR_DAT_04372bb8);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[2] = puVar4 + 2;
      puVar4[3] = puVar4 + 2;
      puVar4[4] = 0;
      *(undefined1 *)(puVar4 + 5) = 0;
      *(undefined4 *)(puVar4 + 0xe) = 0;
      *(undefined4 *)(puVar4 + 0x19) = 0;
      *(undefined1 *)(puVar4 + 0x1c) = 0;
      puVar4[0xf] = 0;
      puVar4[0x10] = puVar4 + 0x10;
      puVar4[0x11] = puVar4 + 0x10;
      puVar4[0x12] = puVar4 + 0x12;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[0x13] = puVar4 + 0x12;
      puVar4[0x14] = 0;
      puVar4[0x15] = 0;
      puVar4[0x16] = puVar4 + 0x16;
      puVar4[0x17] = puVar4 + 0x16;
      puVar4[0x18] = 0;
      puVar4[0x1a] = 0;
      puVar4[0x1b] = 0;
    }
    local_90 = param_3;
    lStack_88 = param_1;
    FUN_00233638(&local_90,puVar4,*(undefined8 *)(param_2 + 0x130));
    local_80[0] = 2.66247e-44;
    local_78 = puVar4;
    FUN_00242538(*(undefined8 *)(param_1 + 0x18),0x13,local_80,0x10);
    if (param_4 != (int *)0x0) {
      puVar10 = (undefined8 *)puVar4[3];
      if (puVar4 + 2 != puVar10) {
        puVar1 = puVar4 + 0x14;
        iVar2 = *param_4;
        do {
          if (0 < iVar2) {
            lVar6 = *(long *)(param_4 + 2);
            uVar7 = 0;
            lVar9 = puVar10[3];
            lVar3 = lVar6;
            do {
              uVar8 = 0;
              while (*(char *)(lVar9 + uVar8) == *(char *)(lVar3 + uVar8)) {
                if ((*(char *)(lVar9 + uVar8) == '\0') || (uVar8 = uVar8 + 1, 0x17 < uVar8)) {
                  if (lVar6 + (uVar7 & 0xffffffff) * 0x28 != 0) {
                    fVar12 = *(float *)(*(long *)(param_4 + 4) +
                                       (ulong)*(uint *)(lVar6 + (uVar7 & 0xffffffff) * 0x28 + 0x1c))
                    ;
                    lVar3 = FUN_0025a7ec(puVar1,lVar9);
                    if (lVar3 != 0) {
                      lVar3 = FUN_0025a7ec(puVar1,lVar9);
                      uVar11 = *(undefined4 *)(lVar3 + 0x40);
                      local_80[0] = fVar12;
                      lVar3 = FUN_0025a85c(puVar1,lVar9);
                      FUN_00251400(*(undefined4 *)(lVar3 + 0x30),*(undefined4 *)(lVar3 + 0x34),
                                   local_80);
                      fVar12 = *(float *)(lVar3 + 0x40);
                      if (local_80[0] != fVar12) {
                        *(float *)(lVar3 + 0x40) = local_80[0];
                        FUN_0025a8b4(puVar1,lVar3 + 0x10,lVar3);
                        for (lVar6 = *(long *)(lVar3 + 0x58); lVar3 + 0x50 != lVar6;
                            lVar6 = *(long *)(lVar6 + 8)) {
                          FUN_0025a844(fVar12,local_80[0],puVar1,lVar6);
                        }
                        lVar3 = FUN_0025a7ec(puVar1,lVar9);
                        plVar5 = (long *)puVar4[0x1b];
                        if (plVar5 == (long *)0x0) goto LAB_002334c0;
                        (**(code **)(*plVar5 + 0x20))
                                  (uVar11,*(undefined4 *)(lVar3 + 0x40),plVar5,puVar4[1],lVar9);
                        puVar10 = (undefined8 *)puVar10[1];
                        goto joined_r0x00233610;
                      }
                    }
                  }
                  goto LAB_002334c0;
                }
              }
              uVar7 = uVar7 + 1;
              lVar3 = lVar3 + 0x28;
            } while (uVar7 != (long)iVar2);
          }
LAB_002334c0:
          puVar10 = (undefined8 *)puVar10[1];
joined_r0x00233610:
          if (puVar4 + 2 == puVar10) {
            return;
          }
          iVar2 = *param_4;
        } while( true );
      }
    }
  }
  return;
}


