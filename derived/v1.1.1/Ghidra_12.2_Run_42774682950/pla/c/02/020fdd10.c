/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020fdd10; name: FUN_020fdd10
 */


void FUN_020fdd10(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 long *param_5,long param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  pcVar2 = (code *)*param_5;
  if ((param_5[1] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_6 + (param_5[1] >> 1)));
  }
  local_30 = (*pcVar2)();
  uStack_2c = param_2;
  local_28 = param_3;
  FUN_0014ff10(param_4,0);
  uVar1 = FUN_0200e238();
  FUN_020fdd74(param_4,uVar1,&local_30);
  return;
}


