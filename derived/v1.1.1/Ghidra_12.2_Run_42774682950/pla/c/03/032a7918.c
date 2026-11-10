/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a7918; name: FUN_032a7918
 */


undefined4 FUN_032a7918(long param_1,long param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 local_244;
  undefined1 *local_240;
  undefined8 local_238;
  undefined1 auStack_230 [512];
  
  if (*(int *)(param_1 + 0x18) == param_3) {
    if (param_1 != param_2) {
      FUN_032a6254(param_2,param_1);
    }
    uVar3 = 0;
  }
  else {
    local_244 = 0;
    local_240 = auStack_230;
    local_238 = -0x7ffffff000000000;
    iVar2 = FUN_032a6d1c(*(int *)(param_1 + 0x18),param_3,param_1 == param_2,&local_240,&local_244);
    if (iVar2 < 0) {
      uVar3 = 0x80040200;
    }
    else {
      uVar3 = FUN_032a7a10(param_1,param_2,local_240,local_240 + (long)(int)local_238 * 0x20,
                           local_244,param_4);
    }
    lVar1 = local_238;
    uVar4 = (ulong)local_238._4_4_;
    local_238 = (ulong)local_238._4_4_ << 0x20;
    if ((-1 < lVar1) && (local_240 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,local_240,(uVar4 & 0x3fffffff) << 5);
    }
  }
  return uVar3;
}


