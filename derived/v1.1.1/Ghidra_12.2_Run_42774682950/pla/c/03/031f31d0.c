/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f31d0; name: FUN_031f31d0
 */


void FUN_031f31d0(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_032cf5b0(0xc0);
  FUN_031bd5e0(lVar1,0);
  uVar2 = FUN_031f22f8(*(undefined8 *)(param_2 + 0x40),param_3,lVar1,param_2 + 0x48);
  if ((uVar2 & 1) == 0) {
    *param_1 = 0;
    if (lVar1 != 0) {
      FUN_032d647c(lVar1);
      return;
    }
  }
  else {
    *param_1 = lVar1;
  }
  return;
}


