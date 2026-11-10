/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b80a4; name: FUN_008b80a4
 */


void FUN_008b80a4(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00934624(*(undefined8 *)(**(long **)(param_1 + 0x70) + 0xd0),0,0);
  FUN_00927330(*(undefined8 *)(**(long **)(param_1 + 0x70) + 0xf0),uVar1 & 0xff | (param_2 & 1) << 8
              );
  return;
}


