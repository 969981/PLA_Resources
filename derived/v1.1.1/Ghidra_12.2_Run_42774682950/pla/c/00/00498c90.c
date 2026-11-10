/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00498c90; name: FUN_00498c90
 */


/* WARNING: Removing unreachable block (ram,0x00498e90) */
/* WARNING: Removing unreachable block (ram,0x00498e2c) */

undefined8
FUN_00498c90(void *param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
            long param_6,ulong param_7,undefined8 param_8)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  undefined8 local_f8;
  undefined *local_f0;
  undefined8 uStack_e8;
  uint *local_b8;
  undefined4 local_b0 [2];
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 *puStack_80;
  long local_78;
  int local_70;
  int local_6c;
  uint *local_68;
  
  local_b8 = (uint *)0x0;
  if ((param_4 < 0x40000001) && (lVar7 = FUN_00444930(), lVar7 != 0)) {
    iVar3 = FUN_0041ccc0(param_8);
    if ((param_2 < 0x40000001) && (param_7 < 0x40000001)) {
      local_a8 = &local_f8;
      local_b0[0] = 4;
      local_f0 = &DAT_0416e9d8;
      uStack_e8 = 0;
      puStack_80 = local_b0;
      local_f8 = 0x400000004;
      if (param_6 == 0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = &local_a0;
        uStack_90 = 0;
        local_a0 = (undefined4)param_7;
        uStack_9c = 4;
        local_98 = param_6;
      }
      local_88 = param_5;
      iVar4 = FUN_00441c70(&local_b8,&local_88,puVar8,param_2 & 0xffffffff);
      puVar12 = local_b8;
      if (0 < iVar4) {
        lVar13 = (long)iVar4;
        local_68 = local_b8;
        uVar5 = FUN_00409ce0(&local_68,&local_78,&local_6c,&local_70,lVar13);
        if ((uVar5 >> 7 & 1) == 0) {
          bVar9 = true;
          if ((local_6c == 0x10) && (local_70 == 0)) {
            bVar9 = false;
            lVar13 = (long)puVar12 + (lVar13 - (long)local_68);
            puVar12 = local_68;
          }
          if ((((!bVar9) &&
               (local_68 = puVar12,
               uVar5 = FUN_00409ce0(&local_68,&local_78,&local_6c,&local_70,lVar13),
               puVar2 = local_68, (uVar5 >> 7 & 1) == 0)) && (local_6c == 0x10)) && (local_70 == 0))
          {
            lVar13 = (long)puVar12 + (lVar13 - (long)local_68);
            uVar5 = FUN_00409ce0(&local_68,&local_78,&local_6c,&local_70,lVar13);
            if ((((uVar5 >> 7 & 1) == 0) && (local_6c == 6)) && (local_70 == 0)) {
              local_68 = (uint *)((long)local_68 + local_78);
              uVar5 = FUN_00409ce0(&local_68,&local_78,&local_6c,&local_70,
                                   (long)puVar2 + (lVar13 - (long)local_68));
              puVar12 = local_68;
              if (((uVar5 >> 7 & 1) == 0) && (local_6c == 4 && local_70 == 0)) {
                iVar6 = FUN_00404df0(local_68,&DAT_0416e9d8,4);
                if (iVar6 != 0) {
                  iVar4 = 0;
                }
                if ((iVar4 != 0) && (iVar6 = FUN_004449b0(lVar7,param_8,0), iVar6 != 0)) {
                  uVar11 = (ulong)iVar3;
                  uVar5 = 1;
                  do {
                    iVar3 = FUN_00444ad0(lVar7,param_3,param_4);
                    if (iVar3 == 0) break;
                    uVar1 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                    *puVar12 = uVar1 >> 0x10 | uVar1 << 0x10;
                    iVar3 = FUN_00444ad0(lVar7,local_b8,(long)iVar4);
                    if (iVar3 == 0) break;
                    if (param_2 < uVar11) {
                      iVar3 = FUN_00444af0(lVar7,&local_f8,0);
                      if (iVar3 != 0) {
                        memcpy(param_1,&local_f8,param_2);
                        FUN_004006a0(&local_f8,uVar11);
LAB_00498fb4:
                        uVar10 = 1;
                        goto LAB_00498fec;
                      }
                      break;
                    }
                    iVar3 = FUN_00444af0(lVar7,param_1,0);
                    if (iVar3 == 0) break;
                    param_2 = param_2 - uVar11;
                    if (param_2 == 0) goto LAB_00498fb4;
                    param_1 = (void *)((long)param_1 + uVar11);
                    uVar5 = uVar5 + 1;
                    iVar3 = FUN_004449b0(lVar7,param_8,0);
                  } while (iVar3 != 0);
                }
              }
            }
          }
        }
      }
    }
    uVar10 = 0;
LAB_00498fec:
    FUN_00400420(local_b8,"external/openssl/crypto/dh/dh_kdf.c",0x92);
    FUN_00444950(lVar7);
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}


