/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013cad18; name: FUN_013cad18
 */


void FUN_013cad18(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = FUN_013cafb4();
  if (lVar1 == 0) {
    return;
  }
  pcVar2 = *(code **)(lVar1 + 0x118);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x120) = 0;
    *(undefined8 *)(lVar1 + 0x128) = 0;
    *(undefined8 *)(lVar1 + 0x110) = 0;
    *(undefined8 *)(lVar1 + 0x118) = 0;
    (*pcVar2)(lVar1 + 0x130);
  }
  *(undefined1 **)(lVar1 + 0x138) = &LAB_013cb03c;
  *(undefined8 *)(lVar1 + 0x140) = 0;
  pcVar2 = *(code **)(lVar1 + 0x218);
  *(undefined1 **)(lVar1 + 0x120) = &LAB_013cd920;
  *(undefined1 **)(lVar1 + 0x110) = &LAB_013cd8f8;
  *(undefined1 **)(lVar1 + 0x118) = &LAB_013cd91c;
  *(undefined1 **)(lVar1 + 0x128) = &LAB_013cd934;
  *(undefined8 *)(lVar1 + 0x130) = param_1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x228) = 0;
    *(undefined8 *)(lVar1 + 0x220) = 0;
    *(undefined8 *)(lVar1 + 0x218) = 0;
    *(undefined8 *)(lVar1 + 0x210) = 0;
    (*pcVar2)(lVar1 + 0x230);
  }
  *(undefined1 **)(lVar1 + 0x238) = &LAB_013cb044;
  pcVar2 = *(code **)(lVar1 + 0x298);
  *(undefined8 *)(lVar1 + 0x230) = param_1;
  *(undefined8 *)(lVar1 + 0x240) = 0;
  *(undefined1 **)(lVar1 + 0x210) = &LAB_013cd8f8;
  *(undefined1 **)(lVar1 + 0x218) = &LAB_013cd91c;
  *(undefined1 **)(lVar1 + 0x220) = &LAB_013cd920;
  *(undefined1 **)(lVar1 + 0x228) = &LAB_013cd934;
  *(undefined1 *)(lVar1 + 0x91a) = 0;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x2a8) = 0;
    *(undefined8 *)(lVar1 + 0x2a0) = 0;
    *(undefined8 *)(lVar1 + 0x298) = 0;
    *(undefined8 *)(lVar1 + 0x290) = 0;
    (*pcVar2)(lVar1 + 0x2b0);
  }
  *(undefined8 *)(lVar1 + 0x2b0) = param_1;
  *(undefined8 *)(lVar1 + 0x2c0) = 0;
  *(undefined1 **)(lVar1 + 0x2b8) = &LAB_013cb048;
  *(undefined1 **)(lVar1 + 0x290) = &LAB_013cd8f8;
  *(undefined1 **)(lVar1 + 0x298) = &LAB_013cd91c;
  *(undefined1 **)(lVar1 + 0x2a0) = &LAB_013cd920;
  *(undefined1 **)(lVar1 + 0x2a8) = &LAB_013cd934;
  FUN_0281efa4(lVar1,0x111000,&LAB_00444000);
  return;
}


