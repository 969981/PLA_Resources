/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029eccc4; name: FUN_029eccc4
 */


void FUN_029eccc4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  char cVar4;
  long lVar5;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  char local_30 [8];
  undefined1 auStack_28 [8];
  
  local_40 = *param_3;
  lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  if ((ulong)*(byte *)(lVar5 + 0x1c8) < 6) {
    lVar1 = (ulong)*(byte *)(lVar5 + 0x1c8) + 1;
    *(char *)(lVar5 + 0x1c8) = (char)lVar1;
    lVar5 = lVar5 + lVar1 * 0x40;
    *(undefined4 *)(lVar5 + 10) = 0xffffffff;
    *(undefined2 *)(lVar5 + 0x14) = 0x61f;
    *(undefined2 *)(lVar5 + 0x1c) = 0x606;
    *(undefined1 *)(lVar5 + 8) = 0;
    *(undefined4 *)(lVar5 + 0x10) = 0;
    *(undefined1 *)(lVar5 + 0x16) = 0;
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(undefined4 *)(lVar5 + 0x1e) = 0;
    *(undefined1 *)(lVar5 + 0x22) = 0;
    *(undefined2 *)(lVar5 + 0x24) = 0xffff;
    *(undefined8 *)(lVar5 + 0x26) = 0;
    *(undefined8 *)(lVar5 + 0x2e) = 0;
    *(undefined8 *)(lVar5 + 0x36) = 0;
    *(undefined8 *)(lVar5 + 0x3e) = 0;
  }
  FUN_029ecf2c(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1520),auStack_38,&local_40);
  lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  cVar4 = *(char *)(lVar5 + 0x1c8);
  if (cVar4 != '\0') {
    *(char *)(lVar5 + 0x1c8) = cVar4 + -1;
  }
  FUN_029d3abc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x2e0),local_30,auStack_28);
  uVar2 = FUN_029cddec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  pcVar3 = *(char **)(*(long *)(param_1 + 0x40) + 0x28);
  if ((uVar2 & 1) == 0) {
    if (local_30[0] == '\0') {
      return;
    }
    cVar4 = *pcVar3;
    if (cVar4 == '\x01') {
      return;
    }
    if (cVar4 == '\x06') {
      return;
    }
    cVar4 = '\x03';
  }
  else {
    cVar4 = '\x04';
  }
  *pcVar3 = cVar4;
  return;
}


