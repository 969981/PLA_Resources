/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3ba10; name: FUN_02a3ba10
 */


void FUN_02a3ba10(long param_1,long param_2,uint param_3,undefined8 *param_4)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  
  if (param_3 == 0) {
    return;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_2 + (ulong)param_3 * 8 + 0x90);
  }
  bVar1 = *(byte *)(param_2 + 0x7d);
  uVar6 = (ulong)bVar1;
  lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 8) + uVar6 * 8 + 0x120);
  if ((int)param_3 < 8) {
    *(undefined1 *)(lVar4 + 0x239) = 0;
    *(undefined8 *)(lVar4 + 0x98) = 0xf8;
    *(undefined8 *)(lVar4 + 0xa0) = 0xf8;
    *(undefined2 *)(lVar4 + 0x23a) = 0;
    *(undefined8 *)(lVar4 + 0xe8) = 0xf8;
    *(undefined1 *)(lVar4 + 0x243) = 0;
    *(undefined4 *)(lVar4 + 0x23c) = 0;
    *(undefined8 *)(lVar4 + 200) = 0xf8;
    *(undefined8 *)(lVar4 + 0xa8) = 0xf8;
    *(undefined8 *)(lVar4 + 0xb0) = 0xf8;
    *(undefined8 *)(lVar4 + 0xb8) = 0xf8;
    *(undefined8 *)(lVar4 + 0xc0) = 0xf8;
    FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x14,uVar6);
    pcVar5 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
    if ((((((*pcVar5 == '\0') || (pcVar5[2] != bVar1)) &&
          ((pcVar5[3] == '\0' || (pcVar5[5] != bVar1)))) &&
         ((pcVar5[6] == '\0' || (pcVar5[8] != bVar1)))) &&
        ((pcVar5[9] == '\0' || (pcVar5[0xb] != bVar1)))) &&
       ((pcVar5[0xc] == '\0' || (pcVar5[0xe] != bVar1)))) {
      if (pcVar5[0xf] == '\0') {
        return;
      }
      if (pcVar5[0x11] != bVar1) {
        return;
      }
    }
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = 0x73;
    param_3 = 0;
  }
  else {
    *(undefined8 *)(lVar4 + 0x60 + (ulong)param_3 * 8 + 0x30) = 0xf8;
    *(undefined1 *)(lVar4 + 0x60 + (ulong)param_3 + 0x1d8) = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    param_3 = param_3 & 0xffff;
    uVar3 = 0x15;
  }
  FUN_02a3e6b8(uVar2,uVar3,uVar6,param_3);
  return;
}


