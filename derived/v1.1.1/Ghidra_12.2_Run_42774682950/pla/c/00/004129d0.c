/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004129d0; name: FUN_004129d0
 */


undefined8
FUN_004129d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  iVar2 = *(int *)(param_2 + 1);
  iVar3 = *(int *)(param_3 + 1);
  if (iVar2 == 0 || iVar3 == 0) {
    FUN_0040c6b0(param_1,0);
    return 1;
  }
  FUN_0040e090(param_4);
  if (((param_1 != param_2) && (puVar6 = param_1, param_1 != param_3)) ||
     (puVar6 = (undefined8 *)FUN_0040e240(param_4), puVar6 != (undefined8 *)0x0)) {
    iVar5 = iVar2 - iVar3;
    if ((iVar2 == 8) && (iVar5 == 0)) {
      lVar7 = FUN_0040c660(puVar6,0x10);
      if (lVar7 != 0) {
        *(undefined4 *)(puVar6 + 1) = 0x10;
        FUN_0040f550(*puVar6,*param_2,*param_3);
        goto LAB_00412b68;
      }
    }
    else {
      iVar1 = iVar3 + iVar2;
      if (((iVar2 < 0x10) || (iVar3 < 0x10)) || (2 < iVar5 + 1U)) {
        lVar7 = FUN_0040c660(puVar6,iVar1);
        if (lVar7 != 0) {
          *(int *)(puVar6 + 1) = iVar1;
          FUN_004123c0(*puVar6,*param_2,iVar2,*param_3,iVar3);
          goto LAB_00412b68;
        }
      }
      else {
        iVar4 = iVar2;
        if (iVar5 < 0) {
          iVar4 = iVar3;
        }
        iVar5 = FUN_0040bfd0(iVar4);
        iVar5 = 1 << (ulong)(iVar5 - 1U & 0x1f);
        if ((iVar2 < iVar5) && (iVar3 < iVar5)) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("j <= al || j <= bl","external/openssl/crypto/bn/bn_mul.c",0x241,
                        "nnopenssl_bn_mul_fixed_top");
        }
        puVar8 = (undefined8 *)FUN_0040e240(param_4);
        if (puVar8 != (undefined8 *)0x0) {
          iVar4 = iVar2 - iVar5;
          if ((iVar4 == 0 || iVar2 < iVar5) && (iVar3 - iVar5 == 0 || iVar3 < iVar5)) {
            lVar7 = FUN_0040c660(puVar8,iVar5 << 2);
            if ((lVar7 != 0) && (lVar7 = FUN_0040c660(puVar6,iVar5 << 2), lVar7 != 0)) {
              FUN_00411f50(*puVar6,*param_2,*param_3,iVar5,iVar4,iVar3 - iVar5,*puVar8);
              *(int *)(puVar6 + 1) = iVar1;
LAB_00412b68:
              *(uint *)(puVar6 + 2) = *(uint *)(param_3 + 2) ^ *(uint *)(param_2 + 2);
              if ((puVar6 == param_1) || (lVar7 = FUN_0040c5d0(param_1,puVar6), lVar7 != 0)) {
                uVar9 = 1;
                goto LAB_00412be8;
              }
            }
          }
          else {
            lVar7 = FUN_0040c660(puVar8,iVar5 << 3);
            if ((lVar7 != 0) && (lVar7 = FUN_0040c660(puVar6,iVar5 << 3), lVar7 != 0)) {
              FUN_00412500(*puVar6,*param_2,*param_3,iVar5,iVar4,iVar3 - iVar5,*puVar8);
              *(int *)(puVar6 + 1) = iVar1;
              goto LAB_00412b68;
            }
          }
        }
      }
    }
  }
  uVar9 = 0;
LAB_00412be8:
  FUN_0040e1b0(param_4);
  return uVar9;
}


