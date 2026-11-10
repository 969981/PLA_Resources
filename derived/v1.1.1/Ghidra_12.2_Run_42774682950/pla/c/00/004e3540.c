/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e3540; name: FUN_004e3540
 */


undefined8
FUN_004e3540(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            undefined4 param_6)

{
  undefined2 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long local_78;
  undefined8 local_70;
  undefined4 local_64;
  
  lVar7 = *(long *)(param_1 + 0x488);
  if (*(long *)(lVar7 + 0x1f0) != 0) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      local_78 = 0;
      local_70 = 0;
      lVar6 = *(long *)(lVar7 + 0x1e8);
      puVar1 = (undefined2 *)(lVar6 + lVar8);
      iVar2 = FUN_004e4ad0(param_1,*(undefined4 *)(puVar1 + 4),param_2,param_6);
      if ((iVar2 != 0) && (((param_2 & 0x1f00) == 0 || ((*(byte *)(puVar1 + 6) & 1) != 0)))) {
        pcVar5 = *(code **)(puVar1 + 8);
        if ((param_2 >> 7 & 1) == 0) {
          if (pcVar5 != (code *)0x0) {
LAB_004e35e8:
            iVar2 = (*pcVar5)(param_1,*puVar1,param_2,&local_70,&local_78,param_4,param_5,&local_64,
                              *(undefined8 *)(puVar1 + 0x10));
            if (iVar2 < 0) {
              uVar3 = 0xea;
              uVar4 = 0xd4;
              goto LAB_004e36e0;
            }
            if (iVar2 != 0) goto LAB_004e361c;
          }
        }
        else {
          if (pcVar5 != (code *)0x0) goto LAB_004e35e8;
LAB_004e361c:
          iVar2 = FUN_004cb590(param_3,*(undefined2 *)(lVar6 + lVar8),2);
          if ((((iVar2 == 0) || (iVar2 = FUN_004cac70(param_3,2), iVar2 == 0)) ||
              ((local_78 != 0 && (iVar2 = FUN_004cb7f0(param_3,local_70), iVar2 == 0)))) ||
             (iVar2 = FUN_004cade0(param_3), iVar2 == 0)) {
            local_64 = 0x50;
            uVar3 = 0x44;
            uVar4 = 0xe0;
LAB_004e36e0:
            FUN_004c99a0(param_1,local_64,0x22a,uVar3,
                         "external/openssl/ssl/statem/extensions_cust.c",uVar4);
            return 0;
          }
          if ((param_2 >> 7 & 1) != 0) {
            if ((*(uint *)(puVar1 + 6) >> 1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00404dd0("Assertion failed: (meth->ext_flags & SSL_EXT_FLAG_SENT) == 0",
                           "external/openssl/ssl/statem/extensions_cust.c",0xe7);
            }
            *(uint *)(puVar1 + 6) = *(uint *)(puVar1 + 6) | 2;
          }
          if (*(code **)(puVar1 + 0xc) != (code *)0x0) {
            (**(code **)(puVar1 + 0xc))
                      (param_1,*puVar1,param_2,local_70,*(undefined8 *)(puVar1 + 0x10));
          }
        }
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x38;
    } while (uVar9 < *(ulong *)(lVar7 + 0x1f0));
  }
  return 1;
}


