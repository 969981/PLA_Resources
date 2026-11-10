/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00415130; name: FUN_00415130
 */


undefined4 FUN_00415130(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar3 = FUN_00415c60(0);
  if (lVar3 == 0) {
    lVar4 = 0;
    uVar2 = 0;
joined_r0x004151d8:
    if (param_1 != 0) goto LAB_004151f8;
  }
  else {
    lVar4 = param_1;
    if ((param_1 != 0) || (lVar4 = FUN_00415220(), lVar4 != 0)) {
      iVar1 = FUN_00415ce0(lVar3,lVar4,0);
      if (iVar1 < 1) {
        if ((((uint)param_3 >> 4 & 1) == 0) || (uVar5 = FUN_00401a70(), (uVar5 & 0xfff) != 0x72)) {
          uVar2 = 0;
        }
        else {
          FUN_004016d0();
          uVar2 = 1;
        }
      }
      else {
        uVar2 = FUN_00414d20(lVar3,param_2,param_3);
      }
      goto joined_r0x004151d8;
    }
    uVar2 = 0;
  }
  FUN_00400420(lVar4,"external/openssl/crypto/conf/conf_mod.c",0x8e);
LAB_004151f8:
  FUN_00415cc0(lVar3);
  if ((param_3 & 2) != 0) {
    uVar2 = 1;
  }
  return uVar2;
}


