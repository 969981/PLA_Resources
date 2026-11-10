/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029df26c; name: FUN_029df26c
 */


void FUN_029df26c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  FUN_029df3d4(param_1,param_3[1],param_3,param_3[3]);
  FUN_02982d94(*(undefined8 *)(param_1 + 0x38),param_3[2],param_3[3],*param_3,param_3[1],
               *(undefined1 *)(param_3 + 4),0,0xa4);
  FUN_02982d94(*(undefined8 *)(param_1 + 0x38),param_3[2],param_3[3],*param_3,param_3[1],
               *(undefined1 *)(param_3 + 4),1,0xa3);
  FUN_02982d94(*(undefined8 *)(param_1 + 0x38),param_3[2],param_3[3],*param_3,param_3[1],
               *(undefined1 *)(param_3 + 4),0,0xa5);
  plVar6 = (long *)param_3[3];
  *(undefined1 *)((long)plVar6 + 0x5c) = 0;
  bVar1 = *(byte *)((long)plVar6 + 0x5a);
  if (bVar1 != 0) {
    lVar3 = *plVar6;
    *(undefined1 *)((long)plVar6 + 0x5c) = 1;
    if (lVar3 != 0) {
      bVar2 = 1;
      do {
        lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 800);
        lVar3 = *(long *)(*(long *)(*(long *)(lVar4 + 0x10) + 8) +
                          (ulong)*(byte *)(lVar3 + 0x7d) * 8 + 0x120);
        if (*(short *)(lVar3 + 0x76) != 0) {
          FUN_029825a0(*(undefined8 *)(lVar4 + 0x38),lVar3,1);
          bVar2 = *(byte *)((long)plVar6 + 0x5c);
          bVar1 = *(byte *)((long)plVar6 + 0x5a);
        }
        if (bVar1 <= bVar2) break;
        uVar5 = (ulong)bVar2;
        bVar2 = bVar2 + 1;
        *(byte *)((long)plVar6 + 0x5c) = bVar2;
        lVar3 = plVar6[uVar5];
      } while (lVar3 != 0);
    }
  }
  FUN_02982d94(*(undefined8 *)(param_1 + 0x38),param_3[2],param_3[3],*param_3,param_3[1],
               *(undefined1 *)(param_3 + 4),0,0xa6);
  FUN_02982d94(*(undefined8 *)(param_1 + 0x38),param_3[2],param_3[3],*param_3,param_3[1],
               *(undefined1 *)(param_3 + 4),0,0xa7);
  FUN_02982d94(*(undefined8 *)(param_1 + 0x38),param_3[2],param_3[3],*param_3,param_3[1],
               *(undefined1 *)(param_3 + 4),1,0xa8);
  FUN_02983824(*(undefined8 *)(param_1 + 0x38),param_3[2],param_3[3],param_3[1],
               *(undefined1 *)(param_3 + 4));
  return;
}


