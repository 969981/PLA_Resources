/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0130046c; name: FUN_0130046c
 */


undefined8 FUN_0130046c(long param_1,char param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_012fa4c4(param_1 + 0x1d48);
  if (iVar1 == 1) {
    uVar2 = 0x345d8f7f1b77e25a;
    uVar3 = 0x345d907f1b77e40d;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        return 0x34608f7f1b7a1831;
      }
      return 0x6007abf762bcaf12;
    }
    uVar2 = 0x34608d7f1b7a14cb;
    uVar3 = 0x34608c7f1b7a1318;
  }
  if (param_2 != '\x01') {
    uVar3 = uVar2;
  }
  return uVar3;
}


