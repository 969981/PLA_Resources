/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec2d18; name: FUN_02ec2d18
 */


undefined8 FUN_02ec2d18(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_02f59e40(0,0x580,0x10);
  *(long *)(param_1 + 8) = lVar1;
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0x10;
    lVar1 = FUN_02f59e40(0,0x380,0x10);
    *(long *)(param_1 + 0x18) = lVar1;
    if (lVar1 != 0) {
      *(undefined4 *)(param_1 + 0x24) = 0x10;
      return 1;
    }
  }
  return 0x34;
}


