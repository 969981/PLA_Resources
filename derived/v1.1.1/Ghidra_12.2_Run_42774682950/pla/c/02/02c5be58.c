/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5be58; name: FUN_02c5be58
 */


char FUN_02c5be58(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  iVar2 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),0);
  iVar3 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),1);
  cVar4 = '\x02';
  if (iVar2 == 0) {
    cVar4 = '\x01';
  }
  cVar1 = iVar2 != 0;
  if (iVar3 != 0) {
    cVar1 = cVar4;
  }
  iVar2 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),2);
  if (iVar2 != 0) {
    cVar1 = cVar1 + '\x01';
  }
  iVar2 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),3);
  if (iVar2 != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}


