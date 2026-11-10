/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f371f0; name: FUN_01f371f0
 */


void FUN_01f371f0(char *param_1,long param_2)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  if (*param_1 == '\0') {
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    pcVar2 = param_1 + 0x10;
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    FUN_0087fcf0(pcVar2,param_2);
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    param_1[0x2c] = '\0';
    param_1[0x2d] = '\0';
    param_1[0x2e] = '\0';
    param_1[0x2f] = '\0';
    pcVar2 = param_1 + 0x20;
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    FUN_00b6081c(pcVar2,param_2 + 0x10);
    cVar1 = *(char *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x28);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    param_1[0x40] = cVar1;
    *param_1 = '\x01';
    *(undefined8 *)(param_1 + 0x30) = uVar3;
  }
  else {
    FUN_0087fcf0(param_1 + 0x10,param_2);
    FUN_00b6081c(param_1 + 0x20,param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x20);
    param_1[0x40] = *(char *)(param_2 + 0x30);
  }
  return;
}


