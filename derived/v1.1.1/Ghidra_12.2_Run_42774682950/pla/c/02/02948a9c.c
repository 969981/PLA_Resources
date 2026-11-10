/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02948a9c; name: FUN_02948a9c
 */


void FUN_02948a9c(long *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = FUN_02c6849c(*(undefined8 *)(*param_1 + 0x98));
  sVar1 = FUN_02c6f924(*(undefined8 *)(*param_1 + 0x98));
  sVar2 = FUN_02c687d4(*(undefined8 *)(*param_1 + 0x98));
  if (iVar3 == 0x379) {
    if ((sVar1 == 0) && (sVar2 == 0x450)) goto LAB_02948b30;
  }
  else if (iVar3 == 0x378) {
    if ((sVar1 == 0) && (sVar2 == 0x44f)) goto LAB_02948b30;
  }
  else if (iVar3 == 0x2cc) {
LAB_02948b30:
    FUN_02c62fcc(*param_1,1,0);
    return;
  }
  return;
}


