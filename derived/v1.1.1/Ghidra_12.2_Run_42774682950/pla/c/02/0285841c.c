/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0285841c; name: FUN_0285841c
 */


void FUN_0285841c(long param_1,int param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  
  FUN_028584ac();
  plVar3 = (long *)(param_1 + (long)param_2 * 8 + 0x68);
  FUN_00d09400(*plVar3);
  lVar2 = *plVar3;
  if (*(char *)(lVar2 + 0xe0) == '\0') goto LAB_02858470;
  if ((*(byte *)(lVar2 + 0xe1) & 1) == 0) goto LAB_02858470;
  if (*(long *)(lVar2 + 0x70) == 0) goto LAB_02858470;
  cVar1 = *(char *)(*(long *)(lVar2 + 0x70) + 0x1e1);
  while (cVar1 == '\0') {
LAB_02858470:
    do {
      do {
        nn::os::SleepThread(16000000);
        lVar2 = *plVar3;
      } while (*(char *)(lVar2 + 0xe0) == '\0');
    } while (((*(byte *)(lVar2 + 0xe1) & 1) == 0) || (*(long *)(lVar2 + 0x70) == 0));
    cVar1 = *(char *)(*(long *)(lVar2 + 0x70) + 0x1e1);
  }
  return;
}


