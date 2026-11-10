/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029567f0; name: FUN_029567f0
 */


void FUN_029567f0(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if ((param_2[1] == 0) &&
     (uVar1 = FUN_02949cec(*(undefined4 *)(param_1 + 2),*(undefined1 *)((long)param_1 + 0x15),0),
     (uVar1 & 1) != 0)) {
    uVar2 = FUN_0294c094(param_1[1],*(char *)((long)param_1 + 0x14) != '\0',0,*param_1);
    lVar3 = *param_2;
    lVar4 = *(long *)(*(long *)(lVar3 + 0x68) + 8);
    *(undefined8 *)(lVar3 + 0x80) = uVar2;
    *(long *)(lVar3 + 0x88) = lVar4 + 8;
  }
  if ((param_2[2] == 0) &&
     (uVar1 = FUN_02949cec(*(undefined4 *)(param_1 + 2),*(undefined1 *)((long)param_1 + 0x15),1),
     (uVar1 & 1) != 0)) {
    uVar2 = FUN_0294c094(param_1[1],*(char *)((long)param_1 + 0x14) != '\0',1,*param_1);
    lVar3 = *param_2;
    lVar4 = *(long *)(*(long *)(lVar3 + 0x68) + 8);
    *(undefined8 *)(lVar3 + 0x90) = uVar2;
    *(long *)(lVar3 + 0x98) = lVar4 + 0x40;
  }
  if ((param_2[3] == 0) &&
     (uVar1 = FUN_02949cec(*(undefined4 *)(param_1 + 2),*(undefined1 *)((long)param_1 + 0x15),2),
     (uVar1 & 1) != 0)) {
    uVar2 = FUN_0294c094(param_1[1],*(char *)((long)param_1 + 0x14) != '\0',2,*param_1);
    lVar3 = *param_2;
    lVar4 = *(long *)(*(long *)(lVar3 + 0x68) + 8);
    *(undefined8 *)(lVar3 + 0xa0) = uVar2;
    *(long *)(lVar3 + 0xa8) = lVar4 + 0x78;
  }
  if ((param_2[4] == 0) &&
     (uVar1 = FUN_02949cec(*(undefined4 *)(param_1 + 2),*(undefined1 *)((long)param_1 + 0x15),3),
     (uVar1 & 1) != 0)) {
    uVar2 = FUN_0294c094(param_1[1],*(char *)((long)param_1 + 0x14) != '\0',3,*param_1);
    lVar3 = *param_2;
    lVar4 = *(long *)(*(long *)(lVar3 + 0x68) + 8);
    *(undefined8 *)(lVar3 + 0xb0) = uVar2;
    *(long *)(lVar3 + 0xb8) = lVar4 + 0xb0;
  }
  if ((param_2[5] == 0) &&
     (uVar1 = FUN_02949cec(*(undefined4 *)(param_1 + 2),*(undefined1 *)((long)param_1 + 0x15),4),
     (uVar1 & 1) != 0)) {
    uVar2 = FUN_0294c094(param_1[1],*(char *)((long)param_1 + 0x14) != '\0',4,*param_1);
    lVar3 = *param_2;
    lVar4 = *(long *)(*(long *)(lVar3 + 0x68) + 8);
    *(undefined8 *)(lVar3 + 0xc0) = uVar2;
    *(long *)(lVar3 + 200) = lVar4 + 0xe8;
  }
  return;
}


