/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029cecb4; name: FUN_029cecb4
 */


void FUN_029cecb4(long param_1,byte *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  char local_34 [4];
  
  uVar6 = param_3[1];
  uVar1 = *(undefined4 *)(param_3 + 2);
  uVar4 = FUN_02985f84(*(undefined8 *)(param_1 + 0x38),uVar6,*param_3,uVar1,
                       *(undefined1 *)(param_3 + 4));
  if (((uVar4 & 1) != 0) ||
     (uVar3 = FUN_029cee1c(param_1,uVar6,uVar1,param_3 + 3), (uVar3 & 0xff) == 0)) {
    local_34[0] = '\0';
    bVar2 = FUN_02986460(*(undefined8 *)(param_1 + 0x38),*param_3,param_3[1],
                         *(undefined4 *)(param_3 + 2),*(undefined1 *)(param_3 + 4),local_34);
    if (((bVar2 & 1) != 0) && (local_34[0] != '\0' || *(char *)((long)param_3 + 0x2a) != '\0')) {
      FUN_029869e8(*(undefined8 *)(param_1 + 0x38),param_3[1],*param_3,*(undefined4 *)(param_3 + 2),
                   *(undefined1 *)(param_3 + 4),*(undefined4 *)((long)param_3 + 0x24));
      lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      *(undefined1 *)(lVar5 + (ulong)*(byte *)(lVar5 + 0x1c8) * 0x40 + 0x43) = 1;
    }
    *param_2 = bVar2 & 1;
    return;
  }
  if (*(char *)((long)param_3 + 0x29) != '\0') {
    if ((((uVar3 & 0xff) != 3) || (*(char *)(param_3 + 4) != '\x05')) ||
       (*(char *)((long)param_3 + 0x2b) == '\0')) {
      if (((uVar3 & 0xff) == 1) && (*(int *)(param_3 + 2) == 0x16)) {
        lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
        *(undefined1 *)(lVar5 + (ulong)*(byte *)(lVar5 + 0x1c8) * 0x40 + 0x44) = 1;
      }
      else {
        FUN_02a3b200(*(undefined8 *)(param_1 + 0x20),*param_3,param_3[1],uVar3);
        lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
        *(undefined1 *)(lVar5 + (ulong)*(byte *)(lVar5 + 0x1c8) * 0x40 + 0x43) = 1;
      }
    }
  }
  *param_2 = 1;
  return;
}


