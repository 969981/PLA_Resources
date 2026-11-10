/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080622c; name: FUN_0080622c
 */


void FUN_0080622c(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  FUN_007ec3f0();
  param_1[0xb] = param_2;
  *param_1 = (long)(PTR_DAT_04377810 + 0x10);
  local_30[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1 + 0xc,local_30);
  param_1[0xe] = 0;
  uVar1 = FUN_007e336c();
  lVar2 = FUN_0081a750(0x30,uVar1);
  if (lVar2 != 0) {
    FUN_007e5b70(lVar2);
  }
  param_1[0xf] = lVar2;
  return;
}


