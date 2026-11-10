/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecf12c; name: FUN_02ecf12c
 */


void FUN_02ecf12c(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  plVar3 = *(long **)(param_1 + 0x270);
  if ((plVar3 != param_2) && (*(char *)(param_1 + 0x98) == '\0')) {
    local_50 = 0;
    local_48 = 0xff;
    puVar1 = (undefined8 *)(param_1 + 0xa8);
    local_40 = 0xff;
    local_38 = 0;
    local_60 = *(undefined8 *)(param_1 + 0x10);
    local_58 = *(undefined4 *)(param_1 + 0x34);
    plVar4 = param_2;
    do {
      lVar5 = plVar4[0x11];
      if (lVar5 != 0) goto LAB_02ecf1a0;
      plVar4 = (long *)plVar4[0x10];
    } while (plVar4 != (long *)0x0);
    lVar5 = 0;
LAB_02ecf1a0:
    if (*(long *)(param_1 + 0x278) == 0) {
      uVar2 = 1;
    }
    else if (*(long *)(param_1 + 0x278) == lVar5) {
      uVar2 = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x100) = 0;
      *(undefined8 *)(param_1 + 0x108) = 0;
      plVar3 = (long *)0x0;
      uVar2 = 1;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined2 *)(param_1 + 0x134) = 0;
      *(undefined8 *)(param_1 + 0x114) = 0;
      *(undefined8 *)(param_1 + 0x11c) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x124) = 0;
      *(ushort *)(param_1 + 0x136) = *(ushort *)(param_1 + 0x136) & 0xfc00;
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
      *(undefined8 *)(param_1 + 0x150) = 0;
      *(undefined8 *)(param_1 + 0x270) = 0;
      *(undefined8 *)(param_1 + 0x278) = 0;
    }
    *(ushort *)(param_1 + 0x136) = *(ushort *)(param_1 + 0x136) & 0xfd21;
    *(undefined8 *)(param_1 + 0x128) = 0x20000005d;
    *(undefined4 *)(param_1 + 0x130) = 0;
    (**(code **)(*param_2 + 0x158))
              (param_2,puVar1,param_1 + 0x138,&local_60,param_1 + 0x148,param_1 + 0x160,uVar2,plVar3
              );
    *(long **)(param_1 + 0x270) = param_2;
    if ((lVar5 != 0) && (*(long *)(param_1 + 0x278) == 0)) {
      local_90 = 0;
      local_80 = 0;
      local_88 = 0;
      local_78 = 0xff;
      local_70 = 0xff;
      local_68 = 0;
      FUN_02ea00d4(lVar5,puVar1,&local_90);
      *(long *)(param_1 + 0x278) = lVar5;
    }
  }
  return;
}


