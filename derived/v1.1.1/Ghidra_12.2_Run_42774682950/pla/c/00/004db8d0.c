/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004db8d0; name: FUN_004db8d0
 */


undefined8 FUN_004db8d0(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *local_38;
  
  lVar4 = FUN_00407340(&LAB_004dbaa0);
  if (lVar4 == 0) {
    uVar5 = 0x50;
    uVar6 = 0x41;
    uVar7 = 0x8b3;
  }
  else {
    uVar2 = param_2[1] - 2;
    if (1 < (ulong)param_2[1]) {
      puVar8 = (undefined1 *)*param_2;
      uVar1 = (ulong)CONCAT11(*puVar8,puVar8[1]);
      if (uVar1 <= uVar2) {
        puVar8 = puVar8 + 2;
        *param_2 = (long)(puVar8 + uVar1);
        param_2[1] = uVar2 - uVar1;
        do {
          if (uVar1 == 0) {
            FUN_004078c0(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x260),PTR_FUN_04374178);
            *(long *)(*(long *)(param_1 + 0xa8) + 0x260) = lVar4;
            return 1;
          }
          if (uVar1 == 1) {
LAB_004dba28:
            uVar5 = 0x32;
            uVar6 = 0x9f;
            uVar7 = 0x8c4;
            goto LAB_004db954;
          }
          uVar2 = (ulong)CONCAT11(*puVar8,puVar8[1]);
          uVar9 = uVar1 - 2;
          uVar1 = uVar9 - uVar2;
          if (uVar9 < uVar2) goto LAB_004dba28;
          local_38 = puVar8 + 2;
          lVar10 = FUN_0044abc0(0,&local_38,uVar2);
          if (lVar10 == 0) {
            uVar5 = 0x32;
            uVar6 = 0xd;
            uVar7 = 0x8cb;
            goto LAB_004dba94;
          }
          puVar8 = puVar8 + 2 + uVar2;
          if (local_38 != puVar8) {
            uVar5 = 0x32;
            uVar6 = 0x83;
            uVar7 = 0x8d0;
            goto LAB_004dba94;
          }
          iVar3 = FUN_00407800(lVar4,lVar10);
        } while (iVar3 != 0);
        uVar5 = 0x50;
        uVar6 = 0x41;
        uVar7 = 0x8d6;
LAB_004dba94:
        FUN_004c99a0(param_1,uVar5,0x21d,uVar6,"external/openssl/ssl/statem/statem_lib.c",uVar7);
        goto LAB_004db960;
      }
    }
    uVar5 = 0x32;
    uVar6 = 0x9f;
    uVar7 = 0x8b9;
  }
LAB_004db954:
  FUN_004c99a0(param_1,uVar5,0x21d,uVar6,"external/openssl/ssl/statem/statem_lib.c",uVar7);
  lVar10 = 0;
LAB_004db960:
  FUN_004078c0(lVar4,PTR_FUN_04374178);
  FUN_0044abf0(lVar10);
  return 0;
}


