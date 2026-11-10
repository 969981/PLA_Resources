/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edf7b4; name: FUN_02edf7b4
 */


undefined8 FUN_02edf7b4(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_02edf808();
  if (((uVar1 & 1) == 0) || (uVar1 = FUN_02edf860(param_1 + 0x18), (uVar1 & 1) == 0)) {
    uVar3 = 0x34;
  }
  else {
    lVar2 = FUN_02ee2654(param_1,0x83);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x10) = 0x42800000;
    }
    uVar3 = 1;
  }
  return uVar3;
}


