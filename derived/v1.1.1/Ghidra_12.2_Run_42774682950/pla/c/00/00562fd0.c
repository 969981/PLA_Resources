/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00562fd0; name: FUN_00562fd0
 */


char * FUN_00562fd0(long param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  long lVar4;
  
  FUN_00562d30();
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  FUN_0055de34();
  FUN_0056457c(param_1,6);
  pcVar3 = *(char **)(param_1 + 0x20);
  if (pcVar3 == (char *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    return (char *)0x0;
  }
  if (*(long *)(pcVar3 + 0x10) != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x18);
    *puVar2 = 6;
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(puVar2 + 2) = uVar1;
    return (char *)0x0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  pcVar3[0x10] = '\0';
  pcVar3[0x11] = '\0';
  pcVar3[0x12] = '\0';
  pcVar3[0x13] = '\0';
  pcVar3[0x14] = '\0';
  pcVar3[0x15] = '\0';
  pcVar3[0x16] = '\0';
  pcVar3[0x17] = '\0';
  if ((*pcVar3 == '\x14') && (lVar4 = *(long *)(pcVar3 + 0x20), lVar4 != 0)) {
    pcVar3[0x20] = '\0';
    pcVar3[0x21] = '\0';
    pcVar3[0x22] = '\0';
    pcVar3[0x23] = '\0';
    pcVar3[0x24] = '\0';
    pcVar3[0x25] = '\0';
    pcVar3[0x26] = '\0';
    pcVar3[0x27] = '\0';
    uVar1 = FUN_00560ab0(lVar4);
    *(undefined8 *)(pcVar3 + 0x18) = uVar1;
    FUN_00560e20(lVar4 + 0x10,*(undefined8 *)(lVar4 + 0x18));
    FUN_002e2ea0(PTR_LAB_04373088,lVar4);
  }
  return pcVar3;
}


