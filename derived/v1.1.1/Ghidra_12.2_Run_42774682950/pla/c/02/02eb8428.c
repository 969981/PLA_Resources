/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb8428; name: FUN_02eb8428
 */


undefined8 *
FUN_02eb8428(long *param_1,long *param_2,long param_3,undefined8 param_4,undefined4 param_5,
            byte param_6)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  puVar2 = (undefined8 *)(*DAT_0442d140)(5,0x170,0x10);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar2[2] = 0x3f8000003f800000;
  puVar2[3] = 0x3f8000003f800000;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  *(undefined4 *)(puVar2 + 0x13) = 0;
  *(undefined4 *)(puVar2 + 0x12) = 0;
  *(undefined1 *)(puVar2 + 0x25) = 0;
  puVar2[0x26] = 0;
  puVar2[0x1f] = 0;
  *(undefined1 *)(puVar2 + 0x20) = 0;
  *puVar2 = &PTR_LAB_042a9af8;
  puVar2[1] = &PTR_LAB_042a9c20;
  puVar2[0xe] = &PTR_LAB_042a9608;
  puVar2[0xf] = 0;
  *(undefined1 *)(puVar2 + 0x14) = 0xff;
  *(undefined1 *)(puVar2 + 0x15) = 0xff;
  puVar2[10] = param_2;
  puVar2[0xb] = param_3;
  puVar2[0xc] = param_4;
  puVar2[0xd] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  puVar2[0x19] = 0;
  puVar2[0x21] = 0;
  puVar2[0x22] = 0;
  puVar2[0x23] = 0;
  puVar2[0x24] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1e] = 0;
  uVar1 = DAT_042ab26c;
  *(undefined2 *)(puVar2 + 0x27) = DAT_042ab26c;
  *(undefined1 *)((long)puVar2 + 0x13a) = 0;
  *(undefined4 *)((long)puVar2 + 0x13b) = 0x1010101;
  puVar2[0x28] = 0;
  *(undefined2 *)(puVar2 + 0x29) = uVar1;
  *(undefined1 *)((long)puVar2 + 0x14a) = 0;
  *(undefined4 *)((long)puVar2 + 0x14b) = 0x1010101;
  *(undefined4 *)(puVar2 + 0x2c) = 0xc5800000;
  puVar2[0x2b] = 0xc58000003f800000;
  *(undefined4 *)(puVar2 + 0x2a) = 0;
  *(undefined4 *)((long)puVar2 + 0x164) = param_5;
  *(byte *)(puVar2 + 0x2d) = param_6 & 1 | (param_6 & 1) << 1 | *(byte *)(puVar2 + 0x2d) & 0xf0;
  if (*(long *)(param_3 + 0x68) == 0) {
    uVar3 = (**(code **)(*param_2 + 0x10))(param_2);
  }
  else {
    uVar3 = *(undefined8 *)(param_3 + 0x70);
  }
  puVar2[0x1a] = uVar3;
  if (*(long *)(param_3 + 800) != 0) {
    plVar4 = *(long **)(*(long *)(param_3 + 800) + 0x60);
    if (plVar4 != (long *)0x0) {
LAB_02eb85b0:
      (**(code **)(*plVar4 + 0x40))(plVar4,puVar2);
      lVar5 = *param_1;
      goto joined_r0x02eb85c4;
    }
    if (*(long *)(param_3 + 8) != 0) {
      FUN_02f27424(param_3);
      plVar4 = *(long **)(*(long *)(param_3 + 800) + 0x60);
      if (plVar4 != (long *)0x0) goto LAB_02eb85b0;
    }
  }
  lVar5 = *param_1;
joined_r0x02eb85c4:
  if (lVar5 == 0) {
    *param_1 = (long)puVar2;
    puVar2[9] = 0;
  }
  else {
    puVar2[9] = lVar5;
    *param_1 = (long)puVar2;
  }
  return puVar2;
}


