/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e2e94; name: FUN_001e2e94
 */


undefined8 FUN_001e2e94(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xf20);
  *(int *)(lVar2 + 0x648) = *(int *)(lVar2 + 0x648) + -1;
  FUN_001f3934(lVar2,"a DOH request is completed, %u to go\n");
  if (param_2 != 0) {
    uVar1 = FUN_001f8d5c(param_2);
    FUN_001f3934(lVar2,"DOH request %s\n",uVar1);
  }
  if (*(int *)(lVar2 + 0x648) == 0) {
    FUN_001f86a8(*(undefined8 *)(lVar2 + 0x1f0));
    *(undefined8 *)(lVar2 + 0x1f0) = 0;
    FUN_001e6b54(lVar2,0,6);
  }
  return 0;
}


