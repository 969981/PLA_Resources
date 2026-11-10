/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d73754; name: FUN_00d73754
 */


undefined8 FUN_00d73754(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x2c8) == 0) ||
     ((uVar1 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),&DAT_043acdb8), (uVar1 & 1) != 0 &&
      ((*(long *)(param_1 + 0x2c8) == 0 ||
       ((uVar1 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),&DAT_043acdd8), (uVar1 & 1) != 0 &&
        ((*(long *)(param_1 + 0x2c8) == 0 ||
         ((uVar1 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),&DAT_043acdf8), (uVar1 & 1) != 0 &&
          ((*(long *)(param_1 + 0x2c8) == 0 ||
           ((uVar1 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),&DAT_043ace18), (uVar1 & 1) != 0 &&
            ((*(long *)(param_1 + 0x2c8) == 0 ||
             ((uVar1 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),&DAT_043ace38), (uVar1 & 1) != 0 &&
              ((*(long *)(param_1 + 0x2c8) == 0 ||
               (uVar1 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),&DAT_043ace58), (uVar1 & 1) != 0))))
             )))))))))))))))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


