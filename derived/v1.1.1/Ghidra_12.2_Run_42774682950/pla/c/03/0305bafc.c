/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0305bafc; name: FUN_0305bafc
 */


void FUN_0305bafc(long param_1,long param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  long *plVar1;
  undefined1 auStack_50 [16];
  
  FUN_0305be28(auStack_50,*(undefined8 *)(param_2 + 8));
  plVar1 = *(long **)(*(long *)(param_2 + 0x40) + (ulong)*(byte *)(param_1 + 8) * 8 + 0x13b8);
  (**(code **)(*plVar1 + 0x20))
            (plVar1,param_2,auStack_50,param_1,param_3,param_4,param_5,0xffffffff,0xffffffff);
  return;
}


