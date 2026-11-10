/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03267620; name: FUN_03267620
 */


undefined8 FUN_03267620(long param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((*(uint *)(*(long *)(param_1 + 0xe8) +
                (long)(int)(((*(int *)(param_1 + 0xf8) >> 5) + 1) * (param_3 & 0xffff)) * 4) & 1) !=
      0) {
    uVar1 = (**(code **)**(undefined8 **)(param_1 + 200))();
    if ((~uVar1 & 0xffff) != 0) {
      uVar2 = FUN_032647f0(param_1,param_2,uVar1);
      return uVar2;
    }
  }
  return 0xffff;
}


