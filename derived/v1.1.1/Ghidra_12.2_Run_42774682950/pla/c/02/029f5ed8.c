/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f5ed8; name: FUN_029f5ed8
 */


void FUN_029f5ed8(long param_1,byte *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  code *pcVar6;
  
  *param_2 = 0;
  cVar1 = *param_3;
  cVar2 = param_3[1];
  if ((cVar1 != cVar2 && cVar1 != '\x02') && cVar2 != '\x02') {
    pcVar6 = *(code **)(param_3 + 8);
    uVar5 = (*pcVar6)(0);
    bVar3 = 0;
    if ((uVar5 & 1) != 0) {
      bVar3 = FUN_02a3b444(*(undefined8 *)(param_1 + 0x20),cVar1,cVar2,0);
    }
    uVar5 = (*pcVar6)(1);
    if ((uVar5 & 1) != 0) {
      bVar4 = FUN_02a3b444(*(undefined8 *)(param_1 + 0x20),cVar1,cVar2,1);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar6)(2);
    if ((uVar5 & 1) != 0) {
      bVar4 = FUN_02a3b444(*(undefined8 *)(param_1 + 0x20),cVar1,cVar2,2);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar6)(3);
    if ((uVar5 & 1) != 0) {
      bVar4 = FUN_02a3b444(*(undefined8 *)(param_1 + 0x20),cVar1,cVar2,3);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar6)(4);
    if ((uVar5 & 1) != 0) {
      bVar4 = FUN_02a3b444(*(undefined8 *)(param_1 + 0x20),cVar1,cVar2,4);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar6)(5);
    if ((uVar5 & 1) != 0) {
      bVar4 = FUN_02a3b444(*(undefined8 *)(param_1 + 0x20),cVar1,cVar2,5);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar6)(6);
    if ((uVar5 & 1) != 0) {
      bVar4 = FUN_02a3b444(*(undefined8 *)(param_1 + 0x20),cVar1,cVar2,6);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar6)(7);
    if ((uVar5 & 1) != 0) {
      bVar4 = FUN_02a3b444(*(undefined8 *)(param_1 + 0x20),cVar1,cVar2,7);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar6)(8);
    if ((uVar5 & 1) != 0) {
      bVar4 = FUN_02a3b444(*(undefined8 *)(param_1 + 0x20),cVar1,cVar2,8);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar6)(9);
    if ((uVar5 & 1) != 0) {
      bVar4 = FUN_02a3b444(*(undefined8 *)(param_1 + 0x20),cVar1,cVar2,9);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar6)(10);
    if ((uVar5 & 1) != 0) {
      bVar4 = FUN_02a3b444(*(undefined8 *)(param_1 + 0x20),cVar1,cVar2,10);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar6)(0xb);
    if ((uVar5 & 1) != 0) {
      bVar4 = FUN_02a3b444(*(undefined8 *)(param_1 + 0x20),cVar1,cVar2,0xb);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar6)(0xc);
    if ((uVar5 & 1) != 0) {
      bVar4 = FUN_02a3b444(*(undefined8 *)(param_1 + 0x20),cVar1,cVar2,0xc);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar6)(0xd);
    if ((uVar5 & 1) != 0) {
      bVar4 = FUN_02a3b444(*(undefined8 *)(param_1 + 0x20),cVar1,cVar2,0xd);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar6)(0xe);
    if ((uVar5 & 1) != 0) {
      bVar4 = FUN_02a3b444(*(undefined8 *)(param_1 + 0x20),cVar1,cVar2,0xe);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar6)(0xf);
    if ((uVar5 & 1) != 0) {
      bVar4 = FUN_02a3b444(*(undefined8 *)(param_1 + 0x20),cVar1,cVar2,0xf);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar6)(0x10);
    if ((uVar5 & 1) != 0) {
      bVar4 = FUN_02a3b444(*(undefined8 *)(param_1 + 0x20),cVar1,cVar2,0x10);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar6)(0x11);
    if ((uVar5 & 1) != 0) {
      bVar4 = FUN_02a3b444(*(undefined8 *)(param_1 + 0x20),cVar1,cVar2,0x11);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar6)(0x12);
    if ((uVar5 & 1) != 0) {
      bVar4 = FUN_02a3b444(*(undefined8 *)(param_1 + 0x20),cVar1,cVar2,0x12);
      bVar3 = bVar3 | bVar4;
    }
    *param_2 = bVar3 & 1;
  }
  return;
}


