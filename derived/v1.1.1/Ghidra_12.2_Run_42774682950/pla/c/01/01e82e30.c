/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e82e30; name: FUN_01e82e30
 */


void FUN_01e82e30(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x118) = param_2[1];
  *(undefined8 *)(param_1 + 0x110) = *param_2;
  *(undefined8 *)(param_1 + 0x128) = param_3[1];
  *(undefined8 *)(param_1 + 0x120) = *param_3;
  uVar1 = *param_2;
  uVar2 = *param_3;
  *(ulong *)(param_1 + 0x138) =
       CONCAT44((float)((ulong)param_2[1] >> 0x20) - (float)((ulong)param_3[1] >> 0x20),
                (float)param_2[1] - (float)param_3[1]);
  *(ulong *)(param_1 + 0x130) =
       CONCAT44((float)((ulong)uVar1 >> 0x20) - (float)((ulong)uVar2 >> 0x20),
                (float)uVar1 - (float)uVar2);
  return;
}


