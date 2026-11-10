/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002fcdf0; name: FUN_002fcdf0
 */


/* WARNING: Removing unreachable block (ram,0x002fce4c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_002fcdf0(undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (param_2 - 1U < 2) {
    return 0;
  }
  uVar1 = nnsocketFcntl(param_1,param_2,param_3);
  return uVar1;
}


