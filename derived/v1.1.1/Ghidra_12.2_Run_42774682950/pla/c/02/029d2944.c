/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d2944; name: FUN_029d2944
 */


void FUN_029d2944(long param_1,undefined1 *param_2,long param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 local_34;
  
  *param_2 = 0;
  lVar5 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined1 *)(param_3 + 1);
  uVar2 = FUN_0294177c(*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0x10) + 0x28),uVar1,
                       *(undefined8 *)(param_3 + 8));
  if ((uVar2 & 1) != 0) {
    FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0x30,uVar1,*(undefined4 *)(param_3 + 0xc),
                 *(undefined4 *)(param_3 + 8));
    lVar5 = *(long *)(param_1 + 0x20);
    FUN_02a39100(*(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x18),8);
    FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0x66,8);
    if (*(char *)(param_3 + 0x10) != '\x01') {
      FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x95,0);
      FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x8d,
                   *(undefined1 *)(param_3 + 1));
    }
    lVar3 = *(long *)(param_1 + 0x20);
    uVar1 = *(undefined1 *)(param_3 + 1);
    lVar4 = *(long *)(*(long *)(lVar3 + 0x20) + 0x18);
    lVar5 = (*(code *)PTR_FUN_0427ce68)(&local_34,uVar1);
    if (lVar5 != 0) {
      FUN_029651bc(*(undefined8 *)(*(long *)(lVar4 + 8) + 0x88),3,8,4,0,uVar1,lVar5,local_34,
                   (short)*(undefined4 *)(lVar4 + 0x78));
    }
    FUN_02a3e6b8(*(undefined8 *)(lVar3 + 0x18),0x65,8,uVar1);
    *param_2 = 1;
  }
  return;
}


