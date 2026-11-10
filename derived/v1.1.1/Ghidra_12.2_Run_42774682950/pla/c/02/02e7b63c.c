/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7b63c; name: FUN_02e7b63c
 */


undefined8 FUN_02e7b63c(long param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  bVar2 = *(byte *)(param_1 + 0x30);
  bVar5 = bVar2 & 0xfd;
  *(byte *)(param_1 + 0x30) = bVar5;
  if (*param_2 == -0x80) {
LAB_02e7b6e0:
    bVar5 = bVar5 | 4;
  }
  else {
    if (*param_2 == -0x70) {
      if (param_2[3] != '\0') {
        puVar4 = (undefined4 *)FUN_02f59e30(0,0x90);
        if (puVar4 == (undefined4 *)0x0) {
          *(undefined8 *)(param_1 + 0x10) = 0;
          uVar7 = 0;
        }
        else {
          uVar7 = 1;
          uVar1 = *(undefined4 *)param_2;
          uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
          *puVar4 = 1;
          puVar4[1] = uVar1;
          *(undefined8 *)(puVar4 + 0x22) = 0;
          *(undefined8 *)(puVar4 + 6) = 0;
          *(undefined8 *)(puVar4 + 8) = 0;
          *(undefined8 *)(puVar4 + 10) = 0;
          *(undefined8 *)(puVar4 + 0xc) = 0;
          *(undefined8 *)(puVar4 + 2) = uVar6;
          *(undefined8 *)(puVar4 + 4) = 0;
          *(undefined8 *)(puVar4 + 0xe) = 0;
          *(undefined8 *)(puVar4 + 0x10) = 0;
          *(undefined8 *)(puVar4 + 0x12) = 0;
          *(undefined8 *)(puVar4 + 0x14) = 0;
          *(undefined8 *)(puVar4 + 0x16) = 0;
          *(undefined8 *)(puVar4 + 0x18) = 0;
          *(undefined8 *)(puVar4 + 0x1a) = 0;
          *(undefined8 *)(puVar4 + 0x1c) = 0;
          *(undefined8 *)(puVar4 + 0x1e) = 0;
          *(undefined8 *)(puVar4 + 0x20) = 0;
          *(undefined4 **)(param_1 + 0x10) = puVar4;
          iVar3 = FUN_02e7b1bc();
          if (iVar3 != 1) {
            uVar7 = 0;
          }
        }
        goto LAB_02e7b6ec;
      }
      goto LAB_02e7b6e0;
    }
    bVar5 = bVar2 | 7;
  }
  uVar7 = 1;
  *(byte *)(param_1 + 0x30) = bVar5;
LAB_02e7b6ec:
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  return uVar7;
}


