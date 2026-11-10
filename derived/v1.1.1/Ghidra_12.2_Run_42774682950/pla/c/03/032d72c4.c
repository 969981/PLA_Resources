/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d72c4; name: FUN_032d72c4
 */


bool FUN_032d72c4(undefined8 param_1)

{
  undefined8 *local_38 [2];
  ulong local_28;
  
  FUN_032dc3a0(local_38,param_1,&DAT_043585c8);
  if ((local_28 & 1) != 0) {
    FUN_032e0c40(local_28 & 0xfffffffffffffffe);
  }
  if (local_38[0] != (undefined8 *)0x0) {
    (*(code *)*local_38[0])(param_1,local_38[0][1],local_38[0][2]);
  }
  return local_38[0] != (undefined8 *)0x0;
}


