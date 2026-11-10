/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002bc08c; name: FUN_002bc08c
 */


void FUN_002bc08c(char *param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong local_38 [3];
  
  if ((param_1[1] != '\0') && (*param_1 == '\0')) {
    lVar3 = *param_3;
    *param_3 = lVar3 + 1;
    puVar2 = (undefined4 *)(param_2 + lVar3 * 0x50);
    *puVar2 = 0;
    puVar2[1] = *(undefined4 *)(param_1 + 4);
    *(undefined8 *)(puVar2 + 2) = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[0] = 0;
                    /* try { // try from 002bc0e4 to 002bc0eb has its CatchHandler @ 002bc148 */
    uVar1 = FUN_002bc300(*(undefined8 *)(param_1 + 0x10),param_1 + 8,local_38);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    if ((local_38[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_38[2]);
    }
    param_2 = param_2 + lVar3 * 0x50;
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(char *)(param_2 + 0x20) = param_1[0x20];
    if (param_1[0x20] != '\0') {
      *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    }
  }
  return;
}


