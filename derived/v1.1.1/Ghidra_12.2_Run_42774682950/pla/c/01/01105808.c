/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01105808; name: FUN_01105808
 */


void FUN_01105808(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = -0x41a0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  do {
    lVar1 = param_1 + 0x108 + lVar3;
    lVar3 = lVar3 + 0x30;
    *(undefined8 *)(lVar1 + 0x4178) = 0;
    *(undefined1 **)(lVar1 + 0x4180) = &DAT_cbf29ce484222645;
    *(undefined1 **)(lVar1 + 0x4188) = &DAT_cbf29ce484222645;
    *(undefined8 *)(lVar1 + 0x4190) = 0;
    *(undefined1 **)(lVar1 + 0x4198) = &DAT_cbf29ce484222645;
    *(undefined1 **)(lVar1 + 0x41a0) = &DAT_cbf29ce484222645;
  } while (lVar3 != 0);
  lVar3 = -0x2580;
  *(undefined8 *)(param_1 + 0x4288) = 0;
  *(undefined8 *)(param_1 + 0x4280) = 0;
  do {
    lVar1 = param_1 + 0x42b8 + lVar3;
    lVar3 = lVar3 + 0x30;
    *(undefined8 *)(lVar1 + 0x2558) = 0;
    *(undefined1 **)(lVar1 + 0x2560) = &DAT_cbf29ce484222645;
    *(undefined1 **)(lVar1 + 0x2568) = &DAT_cbf29ce484222645;
    *(undefined8 *)(lVar1 + 0x2570) = 0;
    *(undefined1 **)(lVar1 + 0x2578) = &DAT_cbf29ce484222645;
    *(undefined1 **)(lVar1 + 0x2580) = &DAT_cbf29ce484222645;
  } while (lVar3 != 0);
  lVar3 = 0;
  *(undefined8 *)(param_1 + 0x6818) = 0;
  *(undefined8 *)(param_1 + 0x6810) = 0;
  do {
    puVar2 = (undefined8 *)(param_1 + 0x6848 + lVar3);
    lVar3 = lVar3 + 0x30;
    puVar2[-5] = 0;
    puVar2[-4] = &DAT_cbf29ce484222645;
    puVar2[-3] = &DAT_cbf29ce484222645;
    puVar2[-2] = 0;
    puVar2[-1] = &DAT_cbf29ce484222645;
    *puVar2 = &DAT_cbf29ce484222645;
  } while (lVar3 != 0x4b0);
  return;
}


